#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    char arr[55][55], scan[55][55];
    int dx[]={-1, 0, 1, 0};
    int dy[]={0, -1, 0, 1};
    while (test--){
        int n, m; cin >> n >> m;
        int good, bad; good = bad = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                if (arr[i][j] == 'G') good++;
                if (arr[i][j] == 'B') bad++;
            }
        }
        // if (good==0 || bad==0){
        //     cout << "YES\n"; continue;
        // }
        int x, y;
        bool check = true;
        for (int i = 0; i < n && check; i++){
            for (int j = 0; j < m && check; j++){
                if (arr[i][j]!='B') continue;
                for (int t = 0; t < 4; t++){
                    x = i+dx[t]; y = j+dy[t];
                    if (0<=x && x<n && 0<=y && y<m){
                        if (arr[x][y]!='G' && arr[x][y]!='B'){
                            arr[x][y] = '#';
                        }
                        if (arr[x][y]=='G') check = false;
                    }
                }
            }
        }
        for (int i = 0; i<n && check; i++){
            for (int j = 0; j<m && check; j++){
                if (arr[i][j]!='G') continue;
                for (int a = 0; a < n; a++){
                    for (int b = 0; b < m; b++){ 
                        scan[a][b] = arr[a][b];
                    }
                }
                queue <pair<int, int>> que;
                que.push({i, j}); check = false;
                while (que.size() && !check){
                    auto it = que.front(); que.pop();
                    // if (arr[it.first][it.second] == 'G') arr[it.first][it.second] = '#';
                    for (int t = 0; t < 4; t++){
                        x = it.first+dx[t]; y = it.second+dy[t];
                        if (0<=x && x<n && 0<=y && y<m){
                            if (scan[x][y]=='.' || scan[x][y]=='G'){
                                if (x==n-1 && y==m-1){
                                    check = true; break;
                                }
                                que.push({x, y});
                                if (scan[x][y] == 'G') arr[x][y] = '.';
                                scan[x][y] = '#';
                            }
                        }
                    }
                }
            }
        }
        if (check) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}