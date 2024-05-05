#include <bits/stdc++.h>

using namespace std; 
int32_t inp[505][505];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cin >> inp[i][j];
    }
    int32_t q; cin >> q;
    int32_t x, y, z, t;
    int32_t white, black;
    while (q--){
        cin >> x >> y >> z >> t;
        white = black = 0;
        for (int i = x; i <= z; i++){
            for (int j = y; j <= t; j++){
                if (abs(i-j)%2==0) white += inp[i][j];
                else black += inp[i][j];
            }
        }
        cout << abs(white-black) << '\n';
    }
    return 0;
}