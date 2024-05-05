#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    char arr[n+1][m+1];
    int dis[n+1][m+1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> arr[i][j];
            dis[i][j] = INT_MAX;
        }
    }
    int a, b, c, d; cin >> a >> b >> c >> d;
    deque <int> qx, qy; 
    qx.push_back(a); qy.push_back(b); dis[a][b] = 0;
    int x, y, u, v;
    while (qx.size()){
        x = qx.front(); qx.pop_front();
        y = qy.front(); qy.pop_front();
        v = y;
        for (int u = x-1; u>=max(x-k, 1) && arr[u][v]=='.' && dis[u][v]>=dis[x][y]+1; u--){
            if (dis[u][v]==INT_MAX){
                dis[u][v] = dis[x][y]+1;
                qx.push_back(u); qy.push_back(v);
            }
            dis[u][v] = dis[x][y]+1;
        }
        for (int u = x+1; u<=min(x+k, n) && arr[u][v]=='.' && dis[u][v]>=dis[x][y]+1; u++){
            if (dis[u][v]==INT_MAX){
                dis[u][v] = dis[x][y]+1;
                qx.push_back(u); qy.push_back(v);
            }
            dis[u][v] = dis[x][y]+1;
        }        
        u = x;
        for (int v = y-1; v>=max(y-k, 1) && arr[u][v]=='.' && dis[u][v]>=dis[x][y]+1; v--){
            if (dis[u][v]==INT_MAX){
                dis[u][v] = dis[x][y]+1;
                qx.push_back(u); qy.push_back(v);
            }
            dis[u][v] = dis[x][y]+1;
        }        
        for (int v = y+1; v<=min(y+k, m) && arr[u][v]=='.' && dis[u][v]>=dis[x][y]+1; v++){
            if (dis[u][v]==INT_MAX){
                dis[u][v] = dis[x][y]+1;
                qx.push_back(u); qy.push_back(v);
            }
            dis[u][v] = dis[x][y]+1;
        }
    }
    if (dis[c][d]==INT_MAX) cout << -1;
    else cout << dis[c][d];
    return 0;
}