#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};
int arr[105][105], scan[105][105], graph[105][105];

void BFS(int x, int y, int h, int n, int m){
    if (arr[x][y]>h) return ;
    queue <int> qx, qy;
    qx.push(x); qy.push(y);
    int u, v; graph[x][y] = -1;
    while (qx.size()){
        x = qx.front(); qx.pop();
        y = qy.front(); qy.pop();
        for (int t = 0; t < 4; t++){
            u = x+dx[t]; v = y+dy[t];
            if (0<=u && u<n && 0<=v && v<m && arr[u][v]<=h && graph[u][v]!=-1){
                qx.push(u); qy.push(v);
                graph[u][v] = -1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, test; test = 0;
    while (true){
        cin >> n >> m; test++;
        if (n==m && n==0) break;
        int down, up; down = 1000; up = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                if (arr[i][j]) scan[i][j] = 1;
                else scan[i][j] = 0;
                if (arr[i][j]){
                    down = min(down, arr[i][j]);
                    up = max(up, arr[i][j]);
                }
            }
        }
        bool check = false;
        int pivot;
        for (pivot = down; pivot<=up && !check; pivot++){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    graph[i][j] = scan[i][j];
                }
            }
            for (int i = 0; i < n; i++){
                if (graph[i][0]!=-1) BFS(i, 0, pivot, n, m);
                if (graph[i][m-1]!=-1) BFS(i, m-1, pivot, n, m);
            }
            for (int j = 0; j < m; j++){
                if (graph[0][j]!=-1) BFS(0, j, pivot, n, m);
                if (graph[n-1][j]!=-1) BFS(n-1, j, pivot, n, m);
            }
            int component = 0;
            int x, y, u, v;
            for (int i = 0; i < n && component<2; i++){
                for (int j = 0; j < m && component<2; j++){
                    if (graph[i][j]!=1) continue;
                    component++;
                    queue <int> qx, qy;
                    qx.push(i); qy.push(j);
                    graph[i][j] = 2;
                    while (qx.size()){
                        x = qx.front(); qx.pop();
                        y = qy.front(); qy.pop();
                        for (int t = 0; t < 4; t++){
                            u = x+dx[t]; v = y+dy[t];
                            if (0<=u && u<n && 0<=v && v<m && graph[u][v]==1){
                                qx.push(u); qy.push(v);
                                graph[u][v] = 2;
                            }
                        }
                    }
                    // for (int k = 0; k < n; k++){
                    //     for (int t = 0; t < m; t++){
                    //         cout << graph[k][t] << " ";
                    //     }
                    //     cout << '\n';
                    // }
                }
                // cout << component;
            }
            if (component>1){ check = true; break; }
        }
        if (!check) cout << "Case " << test << ": Island never splits.\n";
        else cout << "Case " << test << ": Island splits when ocean rises " << pivot << " feet.\n";
    }
    return 0;
}