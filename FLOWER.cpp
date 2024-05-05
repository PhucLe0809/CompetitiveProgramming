#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
int inp[maxarray][maxarray];
int scan[maxarray][maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> inp[i][j];
        }
    }
    for (int i = 0; i <= m; i++) scan[i][0] = -1;
    for (int j = 0; j <= n; j++) scan[0][j] = -1;
    scan[1][1] = inp[1][1];
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 && j == 1) continue;
            if (inp[i][j] == -1){
                scan[i][j] = -1; continue;
            }
            if (scan[i-1][j] == -1 && scan[i][j-1] == -1){
                scan[i][j] = -1; continue;
            }
            int a = (scan[i-1][j] != -1)?(scan[i-1][j]):(0);
            int b = (scan[i][j-1] != -1)?(scan[i][j-1]):(0);
            scan[i][j] = inp[i][j] + max(a, b);
        }
    }
    // for (int i = 0; i <= m; i++){
    //     for (int j = 0; j <= n; j++){
    //         cout << scan[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << scan[m][n];
    return 0;
}