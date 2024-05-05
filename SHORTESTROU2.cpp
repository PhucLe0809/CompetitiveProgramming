#include <bits/stdc++.h>
#define inf 1000000000000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, q; cin >> n >> m >> q;
    int64_t dis[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            (i==j)?(dis[i][j]=0):(dis[i][j] = inf);
        }
    }
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        u--; v--; 
        dis[u][v] = dis[v][u] = min(dis[u][v], w);
    }
    for (int k = 0; k < n; k++){
        for (int u = 0; u < n; u++){
            for (int v = 0; v < n; v++){
                dis[u][v] = min(dis[u][v], dis[u][k]+dis[k][v]);
            }
        }
    }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    while (q--){
        cin >> u >> v;
        u--; v--;
        if (dis[u][v]==inf) cout << -1 << '\n';
        else cout << dis[u][v] << '\n';
    }
    return 0;
}