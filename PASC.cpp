#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int matrix[n][n];
    matrix[0][0] = 1;
    for (int i = 1; i < n; i++){
        matrix[i][0] = matrix[i][i] = 1;
        for (int j = 1; j < i; j++){
            matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}