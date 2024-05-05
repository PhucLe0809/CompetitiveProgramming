#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        int coint; cin >> coint;
        for (int t = maxarray - 1; t >= coint; t--){
            if (dp[t - coint]) dp[t] = 1;
        }
    }
    int cnt = 0;
    for (int i = 1; i < maxarray; i++) cnt += dp[i];
    cout << cnt << '\n';
    for (int i = 1; i < maxarray; i++){
        if (dp[i]) cout << i << " ";
    }
    return 0;
}