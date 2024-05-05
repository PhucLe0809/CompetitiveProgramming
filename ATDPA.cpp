#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <int> dp(n);
    dp[0] = 0; dp[1] = abs(inp[1] - inp[0]);
    for (int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + abs(inp[i]-inp[i-1]), dp[i-2] + abs(inp[i]-inp[i-2]));
    }
    cout << dp.back();
    return 0;
}
