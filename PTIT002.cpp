#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a[5][5];
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            cin >> a[i][j];
        }
    }
    int res = a[1][1]*a[2][2]*a[3][3] + a[1][2]*a[2][3]*a[3][1] + a[1][3]*a[2][1]*a[3][2];
    res -= (a[1][3]*a[2][2]*a[3][1] + a[1][1]*a[2][3]*a[3][2] + a[1][2]*a[2][1]*a[3][3]);
    cout << res;
    return 0;
}