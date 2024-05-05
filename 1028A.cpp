#include <bits/stdc++.h>

using namespace std; 
char inp[120][120];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t x, y;
    x = y = -1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> inp[i][j];
            if (inp[i][j]=='B' && x==-1){
                x = i; y = j;
            }
        }
    }
    int32_t z, t;
    for (t = y; t<=m && inp[x][t]=='B'; t++);
    for (z = x; z<=n && inp[z][y]=='B'; z++);
    cout << (x+z)/2 << " " << (y+t)/2;
    return 0;
}