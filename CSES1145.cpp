#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cin >> dp[0];
    int res = 1;
    for (int i = 1; i < n; i++){
        int x; cin >> x;
        int pos = lower_bound(dp, dp + res, x) - dp;
        dp[pos] = x;
        res = max(res, pos + 1);
    }
    cout << res;
    return 0;
}