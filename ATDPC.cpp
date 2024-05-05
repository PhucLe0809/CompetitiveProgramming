#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int inp[maxarray][4], dp[maxarray][4] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> inp[i][1] >> inp[i][2] >> inp[i][3];
    }
    int maxx[4];
    for (int i = 1; i <= n; i++){
        maxx[1] = maxx[2] = maxx[3] = 0;
        for (int j = 1; j <= 3; j++){
            for (int t = 1; t <= 3; t++){
                if (t != j) maxx[j] = max(maxx[j], dp[i-1][t]);
            }
        }
        for (int j = 1; j <= 3; j++) dp[i][j] = maxx[j] + inp[i][j];
    }
    cout << max({dp[n][1], dp[n][2], dp[n][3]});
    return 0;
}