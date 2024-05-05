#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    int total = 0;
    for (auto &it:inp){
        cin >> it;
        total += it;
    }

    int len = 0;
    vector <pair<int, int>> dp(n);
    for (int i = 0; i < n; i++){
        dp[i] = {1, inp[i]};
        for (int j = 0; j < i; j++){
            if (inp[j] <= inp[i]){
                if (dp[i].first > dp[j].first + 1){
                    continue;
                }                
                if (dp[i].first == dp[j].first + 1){
                    dp[i].second = max(dp[i].second, dp[j].second + inp[i]);
                    continue;
                }
                if (dp[i].first < dp[j].first + 1){
                    dp[i].first = dp[j].first + 1;
                    dp[i].second = dp[j].second + inp[i];
                    continue;
                }
            }
        }
        // cout << dp[i].first << " " << dp[i].second << endl;
        len = max(len, dp[i].first);
    }

    int local = 0;
    for (auto &it:dp){
        if (it.first == len) local = max(local, it.second);
    }

    cout << total - local << endl;
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