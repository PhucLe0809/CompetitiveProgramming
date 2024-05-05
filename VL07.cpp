#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    int pas[n+5][n+5];
    pas[0][1] = pas[1][1] = pas[1][2] = 1;
    for (int i = 2; i <= n; i++){
        pas[i][1] = pas[i][i+1] = 1;
        for (int j = 2; j <= i; j++){
            pas[i][j] = pas[i-1][j] + pas[i-1][j-1];
        }
    }
    cout << pas[n][k+1];
    return 0;
}