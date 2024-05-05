#include <bits/stdc++.h>
#define maxarray 1005
#define mod 1000000007

using namespace std;
char inp[maxarray][maxarray];
int dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> inp[i][j];
        }
    }
    for (int i = 0; i <= n; i++) dp[i][0] = dp[0][i] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (inp[i][j] != '.') continue;
            if (i == 1){
                dp[i][j] += dp[i][j-1]; continue;
            }
            if (j == 1){
                dp[i][j] += dp[i-1][j]; continue;
            }
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[n][n];
    return 0;
}