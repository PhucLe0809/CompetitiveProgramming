#include <bits/stdc++.h>
#define maxarray 5005
#define inf 1000000007

using namespace std;
int dp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <int> out;
    for (int dis = 0; dis < n; dis++){
        int answer = inf;
        for (int i = 1; i+dis <= n; i++){
            int j = i + dis;
            if (dis == 0){
                dp[i][j] = 0; answer = 0;
                continue;
            }
            if (dis == 1){
                dp[i][j] = abs(inp[i] - inp[j]);
                answer = min(answer, dp[i][j]);
                continue;
            }
            dp[i][j] = dp[i+1][j-1] + abs(inp[i] - inp[j]);
            answer = min(answer, dp[i][j]);
        }
        out.push_back(answer);
    }
    for (auto &it:out) cout << it << " ";
    return 0;
}