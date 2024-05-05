#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int dx[15] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
int dy[15] = {0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m, n, k; cin >> m >> n >> k;
    vector <vector<int>> matrix(m+5, vector<int>(n+5));
    while (k--){
        int u, v; cin >> u >> v;
        matrix[u][v] = 1;
        for (int t = 0; t < 13; t++){
            int x = u + dx[t];
            int y = v + dy[t];
            if (x >= 0 && x < m && y >= 0 && y < n){
                matrix[x][y] = 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            res += matrix[i][j];
        }
    }

    cout << res << endl;

    return 0;
}