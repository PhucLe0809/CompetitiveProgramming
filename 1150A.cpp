#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m, r; cin >> n >> m >> r;
    int32_t x;
    int32_t buy; cin >> buy;
    for (int i = 1; i < n; i++){
        cin >> x; buy = min(buy, x);
    }
    int32_t sell; cin >> sell;
    for (int i = 1; i < m; i++){
        cin >> x; sell = max(sell, x);
    }
    if (sell<=buy) cout << r;
    else cout << r+(r/buy)*(sell-buy);
    return 0;
}