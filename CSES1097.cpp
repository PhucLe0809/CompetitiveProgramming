#include <bits/stdc++.h>
#define maxarray 5005

using namespace std;
int inp[maxarray];
int64_t dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n; 
    int64_t sum = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; sum += inp[i];
    }
    for (int i = 1; i <= n; i++) dp[i][i] = inp[i];
    for (int dis = 1; dis <= n; dis++){
        for (int i = 1; i + dis <= n; i++){
            int j = i + dis;
            dp[i][j] = max(inp[i] - dp[i+1][j], inp[j] - dp[i][j-1]);
        }
    }
    cout << (sum + dp[1][n])/2;
    return 0;
}