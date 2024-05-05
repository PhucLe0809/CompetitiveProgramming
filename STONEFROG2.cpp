#include <bits/stdc++.h>
#define inf 1000000007
#define maxarray 100005

using namespace std;
int inp[maxarray], dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> inp[i];
    fill(dp, dp + n, inf);
    dp[0] = 0; dp[1] = abs(inp[1] - inp[0]);
    for (int i = 2; i < n; i++){
        for (int j = i-1; j >= 0 && j >= i-k; j--){
            dp[i] = min(dp[i], dp[j] + abs(inp[i] - inp[j]));
        }
    }
    cout << dp[n-1];
    return 0;
}
