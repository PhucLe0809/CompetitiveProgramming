#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n, k; cin >> m >> n >> k;
    int matrix[m+5][n+5];
    vector <int> scan;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if (j+1 == k) scan.push_back(matrix[i][j]);
        }
    }
    sort(scan.begin(), scan.end());
    for (int i = 0; i < m; i++) matrix[i][k-1] = scan[i];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}