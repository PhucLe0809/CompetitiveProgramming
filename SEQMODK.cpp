#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp){
        cin >> it; it %= k;
        it += k; it %= k;
    }
    vector <pair<int, int>> dp(maxarray);
    dp[0] = {1, 0};
    for (int i = n-1; i >= 0; i--){
        for (int j = maxarray - 1; j >= inp[i]; j--){
            if (dp[j - inp[i]].first == 1){
                dp[j].first = 1;
                dp[j].second = max(dp[j].second, dp[j - inp[i]].second + 1);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < maxarray; i++){
        if (i % k == 0) res = max(res, dp[i].second);
    }
    cout << res;
    return 0;
}