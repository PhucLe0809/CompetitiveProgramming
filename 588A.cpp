#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int64_t a[maxarray], p[maxarray], scan[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    scan[0] = 1e9;
    int64_t answer = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> p[i];
        scan[i] = min(scan[i-1], p[i]);
        answer += a[i]*scan[i];
    }
    cout << answer;
    return 0;
}