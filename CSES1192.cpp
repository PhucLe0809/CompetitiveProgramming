#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int inp[maxarray][maxarray];

void bfs(int u, int v, int n, int m){
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    queue <pair<int, int>> que;
    que.push({u, v}); inp[u][v] = 2;
    while (que.size()){
        auto it = que.front(); que.pop();
        u = it.first; v = it.second;
        for (int t = 0; t < 4; t++){
            int x = u + dx[t];
            int y = v + dy[t];
            if (!(1 <= x && x <= n && 1 <= y && y <= m)) continue;
            if (inp[x][y] == 0){
                que.push({x, y});
                inp[x][y] = 2;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            char key; cin >> key;
            if (key == '#') inp[i][j] = 1;
            else inp[i][j] = 0;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (inp[i][j] == 0){
                cnt++;
                bfs(i, j, n, m);
            }
        }
    }
    cout << cnt;
    return 0;
}