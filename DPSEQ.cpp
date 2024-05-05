#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <int> dp(n+1);
    int res = 0;
    for (int i = 1; i <= n; i++){
        int calc = LONG_MIN;
        for (int j = 1; j <= k && i-j >= 0; j++){
            calc = max(calc, dp[i-j]);
        }
        dp[i] = calc + inp[i];
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}