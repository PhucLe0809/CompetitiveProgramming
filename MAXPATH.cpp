#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 105

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
    for (int i = 1; i <= m; i++) scan[i][1] = inp[i][1];
    for (int j = 1; j <= n; j++) scan[0][j] = scan[m+1][j] = LONG_MIN;
    for (int j = 2; j <= n; j++){
        for (int i = 1; i <= m; i++){
            scan[i][j] = inp[i][j] + max({scan[i-1][j-1], scan[i][j-1], scan[i+1][j-1]});
        }
    }
    int res = LONG_MIN;
    for (int i = 1; i <= m; i++) res = max(res, scan[i][n]);
    cout << res;
    return 0;
}