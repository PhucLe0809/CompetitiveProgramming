// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str, ansi; cin >> str >> ansi;

    int n = str.size(), m = ansi.size();
    vector<vector<int>> dp(n+5, vector<int>(m+5));
    for (int i = 1; i <= n; i++) dp[i][0] = i;
    for (int j = 1; j <= m; j++) dp[0][j] = j;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (str[i-1] == ansi[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
        }
    }
    cout << dp[n][m] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}