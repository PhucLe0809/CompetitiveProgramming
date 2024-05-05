#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> t(n+1);
    for (int i = 1; i <= n; i++) cin >> t[i];
    vector <int> r(n);
    for (int i = 1; i < n; i++) cin >> r[i];
    vector <int> dp(n+1); dp[1] = t[1];
    for (int i = 2; i <= n; i++){
        dp[i] = min(dp[i-1] + t[i], dp[i-2] + r[i-1]);
    }
    cout << dp[n];
    return 0;
}