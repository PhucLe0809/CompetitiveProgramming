#include <bits/stdc++.h>

using namespace std; 
bool tick[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    fill(tick, tick+m, false);
    int32_t l, r;
    while (n--){
        cin >> l >> r;
        for (int i = l; i <= r; i++) tick[i]=true;
    }
    int32_t cnt = 0;
    for (int i = 1; i <= m; i++)
        if (!tick[i]) cnt++;
    cout << cnt << '\n';
    for (int i = 1; i <= m; i++)
        if (!tick[i]) cout << i << " ";
    return 0;
}