#include <bits/stdc++.h>
#define maxarray 1000005
#define mod 1000000007

using namespace std;
int64_t dp[maxarray][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    dp[1][0] = 1; dp[1][1] = 1;
    for (int i = 2; i < maxarray-4; i++){
        dp[i-1][0] %= mod;
        dp[i-1][1] %= mod;
        dp[i][0] += 2*dp[i-1][0];
        dp[i][1] += dp[i-1][0];
        dp[i][0] += dp[i-1][1];
        dp[i][1] += 4*dp[i-1][1];
    }
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int64_t answer = (dp[n][0] + dp[n][1]) % mod;
        cout << answer << '\n';
    }
    return 0;
}