#include <bits/stdc++.h>
#define maxarray 405
#define inf 1000000000000000007

using namespace std;
int64_t inp[maxarray];
int64_t pre[maxarray][maxarray];
int64_t dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    memset(pre, 0, sizeof(pre));
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            pre[i][j] = pre[i][j-1] + inp[j];
        }
    }
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++){
        dp[i][i] = pre[i][i];
        dp[i][i+1] = pre[i][i+1];
    }
    int64_t value, temp; int j;
    for (int dis = 2; dis < n; dis++){
        for (int i = 1; i+dis <= n; i++){
            j = i+dis;
            value = inf;
            for (int k = i; k < j; k++){
                temp = dp[i][k] + dp[k+1][j];
                if (k == i || k == j-1){
                    if (k == i) value = min(value, temp + pre[k+1][j]);
                    else value = min(value, temp + pre[i][k]);
                }else value = min(value, temp + pre[i][k]+pre[k+1][j]);
            }
            dp[i][j] = value;
        }
    }
    cout << dp[1][n];
    return 0;
}