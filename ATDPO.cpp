#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;
bool inp[25][25];
int dp[1 << 21];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp[i][j];
        }
    }
    dp[0] = 1;
    for (int s = 0; s < (1 << n); s++){
        int num = __builtin_popcount(s);
        for (int w = 0; w < n; w++){
            if ((s & (1 << w)) || !inp[num][w]) continue;
            dp[s | (1 << w)] += dp[s];
            dp[s | (1 << w)] %= mod;
        }
    }
    cout << dp[(1 << n) - 1];
    return 0;
}