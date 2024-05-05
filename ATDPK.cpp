#include <bits/stdc++.h>
#define maxarray 105
#define limit 100005

using namespace std;
int inp[maxarray];
int dp[limit];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= k; i++){
        for (int j = 1; j <= n; j++){
            if (i >= inp[j] && !dp[i - inp[j]]) dp[i] = 1;
        }
    }
    if (dp[k]) cout << "First"; else cout << "Second";
    return 0;
}