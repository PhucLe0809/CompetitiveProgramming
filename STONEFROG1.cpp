#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> dp(n);
    dp[0] = 0; dp[1] = abs(inp[1] - inp[0]);
    for (int i = 2; i < n; i++) dp[i] = min(dp[i-1] + abs(inp[i] - inp[i-1]), dp[i-2] + abs(inp[i] - inp[i-2]));
    cout << dp[n-1];
    return 0;
}