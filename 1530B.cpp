#include <bits/stdc++.h>

using namespace std; 
bool tick[25][25];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m;
    while (test--){
        cin >> n >> m;
        for (int i = 0; i <= n+1; i++){
            fill(tick[i], tick[i]+m+2, 0);
        }
        tick[1][1] = 1;
        for (int i = 3; i <= n; i += 2){
            tick[i][1] = 1;
        }
        for (int j = 3; j <= m; j += 2){
            tick[n][j] = 1;
        }
        for (int i = n-2; i > 0; i -= 2){
            tick[i][m] = 1;
        }
        for (int j = m-2; j > 0; j -= 2){
            tick[1][j] = 1;
        }
        if (tick[1][2]==1) tick[1][2] = 0;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++) cout << tick[i][j];
            cout << '\n';
        }
    }
    return 0;
}