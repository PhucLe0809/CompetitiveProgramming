#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
struct cell{
    int value; 
    int x, y;
};
bool comp(const cell &a, const cell &b){
    return !(a.value < b.value);
}

signed main(){
    
    int n, m; cin >> n >> m;
    vector <vector<int>> matrix(n, vector<int>(m));
    vector <cell> height;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
            height.push_back({matrix[i][j], i, j});
        }
    }
    
    sort(height.begin(), height.end(), comp);
    vector <vector<int>> scan = matrix;
    int machine = 0;
    for (int i = 0; i < m * n; i++){
        cell pivot = height[i];
        if (scan[pivot.x][pivot.y] == -1) continue;

        machine++;
        queue <pair<int, int>> que; que.push({pivot.x, pivot.y});
        scan[pivot.x][pivot.y] = -1;
        while (!que.empty()){
            auto it = que.front(); que.pop();
            int x = it.first, y = it.second;
            for (int t = 0; t < 4; t++){
                int u = x + dx[t];
                int v = y + dy[t];
                if (u >= 0 && u < n && v >= 0 && v < m){
                    if (scan[u][v] != -1 && matrix[u][v] <= matrix[x][y]){
                        que.push({u, v});
                        scan[u][v] = -1;
                    }
                }
            }
        }
    }
    cout << machine << endl;

    int res = 0, area = 0;
    int sx = -1, sy = -1;
    vector <vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n * m; i++){
        cell pivot = height[i];
        if (visited[pivot.x][pivot.y]) continue;

        area++;
        int cnt_cell = 1;
        queue <pair<int, int>> que; que.push({pivot.x, pivot.y});
        scan[pivot.x][pivot.y] = area; visited[pivot.x][pivot.y] = true;
        while (!que.empty()){
            auto it = que.front(); que.pop();
            int x = it.first, y = it.second;
            for (int t = 0; t < 4; t++){
                int u = x + dx[t];
                int v = y + dy[t];
                if (u >= 0 && u < n && v >= 0 && v < m){
                    if (scan[u][v] != area && matrix[u][v] <= matrix[x][y]){
                        que.push({u, v});
                        scan[u][v] = area;
                        visited[u][v] = true;
                        cnt_cell++;
                    }
                }
            }
        }
        if (res < cnt_cell){
            res = cnt_cell;
            sx = pivot.x;
            sy = pivot.y;
        }
    }
    cout << sx + 1 << " " << sy + 1 << " " << res << endl;    

    return 0;
}