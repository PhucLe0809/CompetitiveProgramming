#include <bits/stdc++.h>
#define maxarray 105
#define limit 100005
#define mod 1000000007

using namespace std;
int inp[maxarray];
int64_t dp[maxarray][limit];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    if (k == 0){
        cout << 1; return 0;
    }
    for (int i = 0; i <= n; i++) dp[i][0] = 1;
    for (int j = 0; j <= k; j++) dp[0][j] = 1;
    int64_t answer, down, calc;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            down = max(j - inp[i], 0);
            if (down == 0) calc = dp[i-1][j];
            else calc = (dp[i-1][j]+mod - dp[i-1][down-1]) % mod;
            dp[i][j] = (dp[i][j-1] + calc) % mod;
        }
        if (i == n) answer = calc;
    }
    cout << answer;
    return 0;
}