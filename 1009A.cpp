#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t a[maxarray], b[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int32_t cnt, i, j;
    cnt = 0;
    i = j = 0;
    while (i<n && j<m){
        if (b[j]>=a[i]){
            cnt++; i++; j++;
        }else i++;
    }
    cout << cnt << '\n';
    return 0;
}