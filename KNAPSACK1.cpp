#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxrow 105
#define maxcol 100005

using namespace std;
int dp[maxrow][maxcol];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <pair<int, int>> gift(n+1);
    for (int i = 1; i <= n; i++) cin >> gift[i].first >> gift[i].second;
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    for (int j = 0; j <= m; j++) dp[0][j] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (gift[i].first > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j - gift[i].first] + gift[i].second);
        }
    }
    cout << dp[n][m];
    return 0;
}