#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    int matrix[n+5][n+5], dp[n+5][n+5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> matrix[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + matrix[i][j];
        }
    }
    int res = 0;
    for (int i = 1; i <= n && i + k-1 <= n; i++){
        for (int j = 1; j <= n && j + k-1 <= n; j++){
            int sum = dp[i+k-1][j+k-1] - dp[i-1][j+k-1] - dp[i+k-1][j-1] + dp[i-1][j-1];
            res = max(res, sum);
        }
    }
    cout << res << endl;
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