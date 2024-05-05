#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <vector<int>> dp(n+1, vector<int>(3));
    for (int i = 1; i <= n; i++){
        int a, b, c; cin >> a >> b >> c;
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + a;
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + b;
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + c;
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}