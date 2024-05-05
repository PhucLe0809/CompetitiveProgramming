#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int dy[]={0, -1, -1, -1, 0, 1, 1, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int arr[n][m], visited[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            visited[i][j] = false;
        }
    }
    int pivot, cnt = 0;
    int u, v, x, y; bool check;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (visited[i][j]) continue;
            queue <int> qx, qy;
            qx.push(i); qy.push(j);
            visited[i][j] = true; 
            check = true; pivot = arr[i][j];
            while (qx.size()){
                x = qx.front(); qx.pop();
                y = qy.front(); qy.pop();
                for (int t = 0; t < 8; t++){
                    u = x+dx[t]; v = y+dy[t];
                    if (0<=u && u<n && 0<=v && v<m){
                        if (arr[u][v]>pivot){
                            check = false;
                        }
                        if (!visited[u][v] && arr[u][v]==pivot){
                            qx.push(u); qy.push(v);
                            visited[u][v] = true;
                        }
                    }
                }
            }
            if (check){
                // cout << i << " " << j << '\n';
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}