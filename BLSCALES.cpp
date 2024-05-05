#include <bits/stdc++.h>
#define maxarray 1000005

using namespace std; 
int32_t w[30], v[maxarray];
int32_t scan[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= m; i++) cin >> v[i];
    fill(scan, scan+maxarray, 0);
    scan[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = maxarray-1; j >= w[i]; j--){
            if (scan[j-w[i]]==1) scan[j] = 1;
        }
    }
    for (int i = 1; i <= m; i++) cout << (scan[v[i]]);
    return 0;
}