#include <bits/stdc++.h>
#define maxarray 5005

using namespace std;
int dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    int n = str.size(), m = ansi.size();
    for (int i = 0; i < maxarray; i++) dp[i][0] = dp[0][i] = i;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (str[i-1] == ansi[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
        }
    }
    cout << dp[n][m];
    return 0;
}