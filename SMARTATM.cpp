#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005
#define inf 1e9

using namespace std;
int dp[21][maxarray];

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    memset(dp, 0, sizeof(dp));
    for (int j = 1; j <= m; j++) dp[0][j] = inf;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (j < inp[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i][j - inp[i]] + 1);
        }
    }
    if (dp[n][m] == inf) cout << -1; else cout << dp[n][m];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}