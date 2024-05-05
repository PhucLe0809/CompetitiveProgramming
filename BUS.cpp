#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;

void GOTOHANOI(){
    int n, d, t; cin >> n >> d >> t;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> dp(maxarray);
    int cnt = 0;
    for (int i = 0; i < maxarray; i++){
        if (i > t + cnt*d) cnt++;
        dp[i] = cnt + 1;
    }
    for (auto &it:inp) cout << dp[it] << " ";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}