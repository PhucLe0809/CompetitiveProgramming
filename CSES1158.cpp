#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int price[1005], page[1005];
int dp[1005][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> price[i];
    for (int i = 1; i <= n; i++) cin >> page[i];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= x; j++){
            if (j < price[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-price[i]] + page[i]);
        }
    }
    cout << dp[n][x];
    return 0;
}