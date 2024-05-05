#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <vector<bool>> dp(n+1, vector<bool>(n+1));
    int len = 1;
    for (int i = 1; i <= n; i++) dp[i][i] = true;
    for (int i = 1; i < n; i++) dp[i+1][i] = true;
    for (int k = 1; k < n; k++){
        for (int i = 1; i + k <= n; i++){
            int j = i + k;
            dp[i][j] = (dp[i+1][j-1]) && (inp[i] == inp[j]);
            if (dp[i][j]) len = max(len, j - i + 1);
        }
    }
    cout << len;
    return 0;
}