#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){

    int n, m, sx, sy; cin >> n >> m >> sx >> sy;
    sx--; sy--; // index start 0
    vector <vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    vector <int> safe_area;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] != 0) continue;
            queue <pair<int, int>> que;
            que.push({i, j}); matrix[i][j] = 2;
            int cnt_cell = 1;
            while (!que.empty()){
                auto it = que.front(); que.pop();
                int x = it.first;
                int y = it.second;
                for (int id = 0; id < 4; id++){
                    int u = x + dx[id];
                    int v = y + dy[id];
                    if (u >= 0 && u < n && v >= 0 && v < m){
                        if (matrix[u][v] == 0){
                            que.push({u, v});
                            matrix[u][v] = 2;
                            cnt_cell++;
                        }
                    }
                }
            }
            safe_area.push_back(cnt_cell);
        }
    }

    cout << safe_area.size() << " ";
    if (safe_area.empty()) cout << 0 << " ";
    else cout << *max_element(safe_area.begin(), safe_area.end()) << " ";

    queue <pair<int, int>> que;
    vector <vector<pair<int, int>>> trace(n, vector<pair<int, int>>(m, {-1, -1}));
    int tx = sx, ty = sy;
    que.push({sx, sy}); matrix[sx][sy] = 3;
    int shortest = n + m;
    while (!que.empty()){
        auto it = que.front(); que.pop();
        int x = it.first;
        int y = it.second;
        if (x == 0 || x == n-1 || y == 0 || y == m-1){
            if (matrix[x][y] >= 3 && matrix[x][y] - 3 < shortest){
                shortest = matrix[x][y] - 3;
                tx = x; ty = y;
            }
        }
        for (int id = 0; id < 4; id++){
            int u = x + dx[id];
            int v = y + dy[id];
            if (u >= 0 && u < n && v >= 0 && v < m){
                if (matrix[u][v] == 2){
                    que.push({u, v});
                    matrix[u][v] = matrix[x][y] + 1;
                    trace[u][v] = {x, y};
                }
            }
        }
    }
    if (shortest == n + m) cout << -1 << endl;
    else cout << shortest << endl;

    vector <pair<int, int>> path;
    path.push_back({tx, ty});
    while (tx != sx || ty != sy){
        pair<int, int> temp = trace[tx][ty];
        tx = temp.first; ty = temp.second;
        path.push_back({tx, ty});
    }
    int sz = path.size();
    for (int i = sz - 1; i >= 0; i--){
        cout << "(" << path[i].first + 1 << "," << path[i].second + 1 << ")";
        if (i != 0) cout << ", ";
    }

    return 0;
}