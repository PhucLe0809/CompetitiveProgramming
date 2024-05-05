#include <bits/stdc++.h>
#define maxarray 3005

using namespace std;
int dp[maxarray][maxarray] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    int n = str.size();
    int m = ansi.size();
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (str[i-1] == ansi[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string answer = "";
    int i = n, j = m;
    while (i > 0 && j > 0){
        if (str[i-1] == ansi[j-1]){
            answer += str[i-1]; i--; j--;
        }else{
            if (dp[i][j] == dp[i-1][j]) i--;
            else j--;
        }
    }
    reverse(answer.begin(), answer.end());
    cout << answer;
    return 0;
}