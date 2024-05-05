#include <bits/stdc++.h>
#define maxarray 3005

using namespace std;
double p[maxarray];
double dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];
    dp[0][0] = 1.0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= i; j++){
            dp[i][j] = dp[i-1][j-1]*p[i] + dp[i-1][j]*(1-p[i]);
        }
    }
    double answer = 0.0;
    for (int i = n; i > n/2; i--) answer += dp[n][i];
    cout << fixed << setprecision(12) << answer;
    return 0;
}