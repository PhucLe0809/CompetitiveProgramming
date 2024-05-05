#include <bits/stdc++.h>
#define maxarray 505
#define inf 1000000000000000007

using namespace std;
int64_t dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (i == j){
                dp[i][j] = 0; continue;
            }
            dp[i][j] = inf;
            for (int k = 1; k < i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
            }
            for (int k = 1; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}