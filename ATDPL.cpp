#include <bits/stdc++.h>
#define maxarray 3005

using namespace std;
int64_t inp[maxarray];
int64_t dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    for (int i = 1; i <= n; i++) dp[i][i] = inp[i];
    for (int i = n-1; i > 0; i--){
        for (int j = i+1; j <= n; j++){
            dp[i][j] = max(inp[i] - dp[i+1][j], inp[j] - dp[i][j-1]);
        }
    }
    cout << dp[1][n];
    return 0;
}