#include <bits/stdc++.h>

using namespace std;
int64_t inp[35][35][35];
int64_t sum[35][35][35];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= n; j++){
                for (int k = 0; k <= n; k++){
                    sum[i][j][k] = 0;
                }
            }
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                for (int k = 1; k <= n; k++){
                    cin >> inp[i][j][k];
                    sum[i][j][k] = inp[i][j][k] + sum[i-1][j][k] + sum[i][j-1][k] + sum[i][j][k-1]
                    - sum[i-1][j-1][k] - sum[i-1][j][k-1] - sum[i][j-1][k-1] + sum[i-1][j-1][k-1];
                }
            }
        }
        int x1, y1, z1, x2, y2, z2;
        int64_t answer = LONG_MIN, calc;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                for (int k = 1; k <= n; k++){
                    for (int t = 1; t <= n-max({i,j,k}); t++){
                        x1 = i; y1 = j; z1 = k;
                        x2 = i+t; y2 = j+t; z2 = k+t;
                        calc = sum[x2][y2][z2] - sum[x1-1][y2][z2] - sum[x2][y1-1][z2] - sum[x2][y2][z1-1]
                        + sum[x1-1][y1-1][z2] + sum[x1-1][y2][z1-1] + sum[x2][y1-1][z1-1] - sum[x1-1][y1-1][z1-1];
                        answer = max(answer, calc);
                    }
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}