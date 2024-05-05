#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    string ansi = str; reverse(ansi.begin(), ansi.end());
    int m = str.size(), n = ansi.size();
    vector <vector<int>> dp(m+1, vector<int>(n+1));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (str[i-1] == ansi[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[m][n];
    return 0;
}