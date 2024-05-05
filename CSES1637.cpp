#include <bits/stdc++.h>
#define maxarray 1000005
#define inf 1000000007

using namespace std;
int dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    fill(dp, dp + maxarray, inf);
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        int temp = i;
        string str = to_string(temp);
        for (auto &it:str){
            dp[i] = min(dp[i], dp[i - (it-'0')] + 1);
        }
    }
    cout << dp[n];
    return 0;
}