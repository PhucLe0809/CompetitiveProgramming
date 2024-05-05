#include <bits/stdc++.h>
#define maxarray 5005
#define inf 1000000007

using namespace std;
int tick[maxarray], dp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        for (int i = 0; i <= n; i++){
            tick[i] = 0; dp[i] = inf;
        }
        int x;
        for (int i = 0; i < n; i++){
            cin >> x; 
            if (x < n) tick[x]++;
        }
        int m = 0;
        while (tick[m]) m++;
        dp[m] = 0;
        for (int i = m; i >= 1; i--){
            for (int j = 0; j < i; j++){
                dp[j] = min(dp[j], dp[i] + i*tick[j]);
            }
        }
        cout << dp[0] - m << '\n';
    }
    return 0;
}