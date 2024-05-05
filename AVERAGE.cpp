#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 205
#define maxsum 40005
#define mod 1000000007

using namespace std;
int dp[maxarray][maxsum];

int cnt_average(int n, int a, vector<int> &inp){
    memset(dp, 0, sizeof(dp)); dp[0][0] = 1;
    // Three loops for three states
    for (int i = 0; i < n; i++){
        for (int k = n; k > 0; k--){
            for (int s = maxsum - 1; s >= inp[i]; s--){
                dp[k][s] = (dp[k][s] + dp[k - 1][s - inp[i]]) % mod;
                // Recurrence relation
                // dp[i + 1][k + 1][s + arr[i]] += dp[i][k][s];
                // dp[i + 1][k][s] += dp[i][k][s];
            }
        }
    }
    int cnt = 0;
    for (int j = 1; j <= n; j++) cnt = (cnt + dp[j][a * j]) % mod;
    return cnt;
}
void GOTOHANOI(){
    int n, a; cin >> n >> a;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    cout << cnt_average(n, a, inp) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}