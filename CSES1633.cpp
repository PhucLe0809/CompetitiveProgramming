#include <bits/stdc++.h>
#define maxarray 1000005
#define mod 1000000007

using namespace std;
int64_t dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6 && i-j >= 0; j++){
            dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }
    cout << dp[n];
    return 0;
}