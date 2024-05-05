#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    vector <pair<int64_t, int64_t>> dp;
    dp.push_back({1, 1});
    for (int i = 1; i < n; i++){
        dp.push_back({dp[i-1].first+dp[i-1].second, dp[i-1].first});
    }
    if (k > dp[n-1].first+dp[n-1].second) cout << -1;
    else{
        string out;
        while (n){
            if (k > dp[n-1].first){
                out += '1'; k -= dp[n-1].first;
            }else{
                out += '0'; // k = dp[n-1].first;
            }
            n--;
        } 
        cout << out;
    }
    return 0;
}