#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int64_t one, two;
    sort(inp.begin(), inp.end());
    vector <int64_t> dp(n+1);
    dp[0] = 0LL;
    dp[1] = inp[0]*(100 - q)/100;
    dp[2] = inp[1]*(100 - q)/100 + dp[1];
    for (int i = 2; i < n; i++){
        one = inp[i] + inp[i-1] + dp[i-2];
        two = inp[i]*(100-q)/100 + dp[i];
        dp[i+1] = min(one, two);
    }
    cout << dp[n];
    return 0;
}