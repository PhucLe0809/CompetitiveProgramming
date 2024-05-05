#include <bits/stdc++.h>

using namespace std; 
int32_t inp[35][35];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> inp[i][j];
    }
    int32_t cnt = 0;
    int32_t row, col;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            row = col = 0;
            for (int s = 0; s < n; s++) col += inp[s][j];
            for (int t = 0; t < n; t++) row += inp[i][t];
            if (col>row) cnt++;
        }
    }
    cout << cnt;
    return 0;
}