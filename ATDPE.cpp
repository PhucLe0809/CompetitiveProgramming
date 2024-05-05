#include <bits/stdc++.h>
#define maxarray 105
#define limit 100005
#define inf 1000000000000000007

using namespace std;
int weight[maxarray], value[maxarray];
int64_t dp[limit];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, w; cin >> n >> w;
    for (int i = 1; i <= n; i++){
        cin >> weight[i] >> value[i];
    }
    fill(dp, dp + limit, inf);
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = limit-1; j >= value[i]; j--){
            if (dp[j - value[i]] != inf){
                dp[j] = min(dp[j], dp[j - value[i]] + weight[i]);
            }
        }
    }
    for (int i = limit-1; i >= 0; i--){
        if (dp[i] <= w){
            cout << i; return 0;
        }
    }
    return 0;
}