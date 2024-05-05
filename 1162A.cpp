#include <bits/stdc++.h>

using namespace std; 
int32_t tower[55];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, h, m; cin >> n >> h >> m;
    for (int i = 1; i <= n; i++) tower[i] = h;
    int32_t l, r, x;
    while (m--){
        cin >> l >> r >> x;
        for (int i = l; i <= r; i++) 
            tower[i] = min(tower[i], x);
    }
    int32_t profit = 0;
    for (int i = 1; i <= n; i++) profit += pow(tower[i], 2);
    cout << profit;
    return 0;
}