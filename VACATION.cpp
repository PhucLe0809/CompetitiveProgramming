#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <tuple<int, int, int>> inp(n);
    for (auto &it:inp) cin >> get<0>(it) >> get<1>(it) >> get<2>(it);
    vector <vector<int>> dp(3, vector<int>(n));
    dp[0][0] = get<0>(inp[0]);
    dp[1][0] = get<1>(inp[0]);
    dp[2][0] = get<2>(inp[0]);
    for (int j = 1; j < n; j++){
        dp[0][j] = max(dp[1][j-1], dp[2][j-1]) + get<0>(inp[j]);
        dp[1][j] = max(dp[0][j-1], dp[2][j-1]) + get<1>(inp[j]);
        dp[2][j] = max(dp[0][j-1], dp[1][j-1]) + get<2>(inp[j]);
    }
    cout << max({dp[0][n-1], dp[1][n-1], dp[2][n-1]}) << endl;
    return 0;
}