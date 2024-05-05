#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n, k; cin >> m >> n >> k;
    int matrix[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) cin >> matrix[i][j];
    }
    sort(matrix[k-1], matrix[k-1] + n);
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}