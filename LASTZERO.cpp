#include <bits/stdc++.h>
#define maxfive 2505
#define maxele 105

using namespace std;
int dp[maxfive][maxele];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <pair<int, int>> scan(n);
    for (int t = 0; t < n; t++){
        int64_t num = inp[t];
        int a = 0;
        while (num % 2 == 0){
            num /= 2; a++;
        }
        int b = 0;
        while (num % 5 == 0){
            num /= 5; b++;
        }
       scan[t].first = a;
       scan[t].second = b;
    }
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0; int answer = 0;
    for (int t = 0; t < n; t++){
        for (int i = maxfive-1; i >= scan[t].second; i--){
            for (int j = 1; j <= k; j++){
                if (dp[i-scan[t].second][j-1] >= 0){
                    dp[i][j] = max(dp[i][j], dp[i-scan[t].second][j-1]+scan[t].first);
                }
            }
            answer = max(answer, min(i, dp[i][k]));
        }
    }
    cout << answer << '\n';
    return 0;
}