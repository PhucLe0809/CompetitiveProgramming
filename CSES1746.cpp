#include <bits/stdc++.h>
#define maxarray 100005
#define mod 1000000007

using namespace std;
int dp[maxarray][105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int x0; cin >> x0;
    if (x0 == 0){
        fill(dp[0], dp[0] + m+1, 1);
    }else{
        dp[0][x0] = 1;
    }
    for (int i = 1; i < n; i++){
        int x; cin >> x;
        if (x == 0){
            for (int j = 1; j <= m; j++){
                for (int k : {j - 1, j, j + 1}){
                    if (k >= 1 && k <= m){
                        (dp[i][j] += dp[i - 1][k]) %= mod;
                    }
                }
            }
        }else{
            for (int k : {x - 1, x, x + 1}){
                if (k >= 1 && k <= m){
                    (dp[i][x] += dp[i - 1][k]) %= mod;
                }
            }
        }
    }
    int answer = 0;
    for (int j = 1; j <= m; j++){
        (answer += dp[n - 1][j]) %= mod;
    }
    cout << answer;
    return 0;
}