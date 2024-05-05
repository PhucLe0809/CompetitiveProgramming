#include <bits/stdc++.h>

using namespace std; 
int32_t scan[205];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, a, b; cin >> n >> a >> b;
    scan[1] = a; scan[2] = b;
    scan[1] %= 6; scan[2] %= 6;
    for (int i = 3; i <= n; i++){
        scan[i] = (scan[i-1]+(i-1))+(scan[i-2]+(i-2));
        scan[i] %= 6;
    }
    int32_t cnt = 0;
    for (int i = 1; i <= n; i++){
        if (scan[i]==0) cnt++;
    }
    cout << cnt;
    return 0;
}