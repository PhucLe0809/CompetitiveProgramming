#include <bits/stdc++.h>
#define maxarray 1000005
#define inf 1000000007

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    fill(dp, dp + maxarray, inf);
    dp[0] = 0;
    for (int i = 0; i < n; i++){
        int coint; cin >> coint;
        for (int j = coint; j <= x; j++){
            dp[j] = min(dp[j], dp[j-coint]+1);
        }
    }
    if (dp[x] == inf) cout << -1; else cout << dp[x];
    return 0;
}