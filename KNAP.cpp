#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <pair<int, int>> goods(n);
    for (auto &it:goods) cin >> it.first >> it.second;
    vector <vector<int>> dp(n + 1, vector<int>(m+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (goods[i-1].first > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j - goods[i-1].first] + goods[i-1].second);
        }
    }
    cout << dp[n][m];
    return 0;
}