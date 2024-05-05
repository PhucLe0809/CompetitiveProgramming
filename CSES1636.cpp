#include <bits/stdc++.h>
#define maxarray 1000005
#define mod 1000000007

using namespace std;
int dp[105][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    dp[0][0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= x; j++){
            if (i) dp[i][j] = dp[i-1][j];
            int res = j - inp[i];
            if (res >= 0){
                dp[i][j] = (dp[i][j] + dp[i][res]) % mod;
            }
        }
    }
    cout << dp[n-1][x];
    return 0;
}