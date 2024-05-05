#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){
    
    int m, n; cin >> m >> n;
    vector<vector<double>> matrix(m, vector<double>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    double val = LONG_MAX * 1.0;
    int x = -1, y = -1;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            bool flag = true;
            for (int t = 0; t < 4 && flag; t++){
                int u = i + dx[t];
                int v = j + dy[t];
                if (u >= 0 && u < m && v >= 0 && v < n){
                    flag = (matrix[i][j] > matrix[u][v]);
                }
            }
            if (flag && val > matrix[i][j]){
                val = matrix[i][j];
                x = i; y = j;
            }
        }
    }
    if (val == LONG_MAX * 1.0) cout << -1 << endl;
    else cout << x << " " << y << endl;

    return 0;
}