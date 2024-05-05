#include <bits/stdc++.h>
#define maxarray 1005
#define mod 1000000007

using namespace std;
int dp[maxarray][maxarray] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    char x;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> x;
            if (i==1 && j==1){
                dp[i][j] = 1; continue;
            }else{
                if (x == '.') dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
                else dp[i][j] = 0;
            }
        }
    }
    cout << dp[n][m];
    return 0;
}