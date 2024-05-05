#include <bits/stdc++.h>
#define maxrow 105
#define maxcol 100005

using namespace std;
int weight[maxrow], value[maxrow];
int64_t dp[maxrow][maxcol] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, w; cin >> n >> w;
    for (int i = 1; i <= n; i++){
        cin >> weight[i] >> value[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= w; j++){
            if (j < weight[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
        }
    }
    cout << dp[n][w];
    return 0;
}