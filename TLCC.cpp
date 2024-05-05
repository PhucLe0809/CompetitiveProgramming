#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int dx[9] = {-1, -2, 1, 2, 1, 2, -1, -2};
int dy[9] = {-1, -2, -1, -2, 1, 2, 1, 2};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m, n; cin >> m >> n;
    vector <vector<int>> matrix(m+5, vector<int>(n+5));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    int res = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            bool flag = true;
            for (int t = 0; t < 8 && flag; t++){
                int x = i + dx[t];
                int y = j + dy[t];
                if (x >= 0 && x < m && y >= 0 && y < n){
                    flag = flag && (matrix[i][j] > matrix[x][y]);
                }
            }
            res += (int)flag;
        }
    }

    cout << res << endl;

    return 0;
}