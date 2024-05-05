#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    vector <int> dp(maxarray);
    dp[0] = dp[1] = 0; dp[2] = dp[3] = 1;
    for (int i = 4; i < maxarray; i++){
        dp[i] = min(dp[(i - i%2) / 2] + i%2, dp[(i - i%3) / 3] + i%3) + 1;
    }
    while (test--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}