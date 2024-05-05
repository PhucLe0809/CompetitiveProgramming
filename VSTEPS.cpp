#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 14062008

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> dp(n+1, -1);
    for (int i = 0; i < k; i++){
        int x; cin >> x; dp[x] = 0;
    }
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++){
        if (dp[i] == 0) continue;
        int a = 0, b = 0;
        if (dp[i-1] != 0) a = dp[i-1];
        if (dp[i-2] != 0) b = dp[i-2];
        if (a != 0 || b != 0) dp[i] = (a + b) % mod;
        else dp[i] = 0;
    }
    cout << dp[n];
    return 0;
}