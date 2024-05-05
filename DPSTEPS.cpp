#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> dp(n+1);
    for (int i = 0; i < k; i++){
        int x; cin >> x; dp[x] = -1;
    }
    (dp[2] != -1)?((dp[1] != -1)?(dp[2] = 2):(dp[2] = 1)):(dp[2] = 0);
    (dp[1] != -1)?(dp[1] = 1):(dp[1] = 0);
    for (int i = 3; i <= n; i++){
        (dp[i] != -1)?(dp[i] = (dp[i-1] + dp[i-2]) % mod):(dp[i] = 0);
    }
    cout << dp[n];
    return 0;
}