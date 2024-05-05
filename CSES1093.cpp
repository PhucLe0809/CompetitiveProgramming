#include <bits/stdc++.h>
#define maxarray 100005
#define mod 1000000007
 
using namespace std;
int64_t dp[maxarray];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if ((n*(n+1)/2) % 2 != 0){
        cout << 0; return 0;
    }
    dp[0] = 1; int target = n*(n+1)/4;
    for (int i = 1; i < n; i++){
        for (int t = target; t >= i; t--){
            if (dp[t - i]){
                (dp[t] += dp[t - i]) %= mod;
            }
        }
    }
    cout << dp[target];
    return 0;
}