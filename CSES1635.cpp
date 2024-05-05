#include <bits/stdc++.h>
#define maxarray 1000005
#define mod 1000000007

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    dp[0] = 1;
    for (int j = 0; j <= x; j++){
        for (int i = 0; i < n; i++){
            if (j - inp[i] >= 0){
                dp[j] = (dp[j] + dp[j - inp[i]]) % mod;
            }
        }
    }
    cout << dp[x];
    return 0;
}