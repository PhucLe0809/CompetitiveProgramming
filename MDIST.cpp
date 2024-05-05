#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.first >> it.second;
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            int dist = abs(inp[i].first - inp[j].first) + abs(inp[i].second - inp[j].second);
            res = max(res, dist);
        }
    }
    cout << res;
    return 0;
}