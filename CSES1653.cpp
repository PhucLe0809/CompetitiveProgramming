#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> weight(n);
    for (auto &it:weight) cin >> it;
    pair <int, int> dp[1<<n];
    dp[0] = {1, 0};
    for (int s = 1; s < (1<<n); s++){
        // initial value: n+1 rides are needed
        dp[s] = {n+1, 0};
        for (int p = 0; p < n; p++){
            if (s&(1<<p)){
                auto option = dp[s^(1<<p)];
                if (option.second + weight[p] <= x){
                    // add p to an existing ride
                    option.second += weight[p];
                } else{
                    // reserve a new ride for p
                    option.first++;
                    option.second = weight[p];
                }
                dp[s] = min(dp[s], option);
            }
        }
    }
    cout << dp[(1<<n) - 1].first;
    return 0;
}