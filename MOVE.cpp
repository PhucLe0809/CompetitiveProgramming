#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 505

using namespace std;
int inp[maxarray][maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> inp[i][j];
        }
    }
    vector <vector<int>> dp(m+1, vector<int>(n+1, LONG_MIN));
    dp[1][1] = inp[1][1];
    for (int j = 2; j <= n; j++) dp[1][j] = dp[1][j-1] + inp[1][j];
    for (int i = 2; i <= m; i++){
        for (int j = 1; j <= n; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + inp[i][j];
        }
    }
    cout << dp[m][n];
    return 0;
}