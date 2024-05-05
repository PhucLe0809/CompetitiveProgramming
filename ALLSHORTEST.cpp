#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;
struct bell{
    int u, v, w;
};

void bellman_ford(int s, int n, int m, vector <bell> &edge, vector <int> &dis){
    fill(dis.begin(), dis.end(), inf);
    int u, v, w;
    dis[s] = 0;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
            }
        }
    }
}
void check_neg_cycle(int n, int m, vector <bell> &edge, vector <int> &dis){
    int u, v, w;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = -inf;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, q;
    while (true){
        cin >> n >> m >> q;
        if (n==0) break;
        vector <bell> edge(m);
        for (int i = 0; i < m; i++){
            cin >> edge[i].u >> edge[i].v >> edge[i].w;
        }
        vector <vector<int>> scan(n, vector <int> (n));
        for (int u = 0; u < n; u++){
            bellman_ford(u, n, m, edge, scan[u]);
            check_neg_cycle(n, m, edge, scan[u]);
        }
        int a, b;
        while (q--){
            cin >> a >> b;
            if (scan[a][b]==inf) cout << "Impossible\n";
            else if (scan[a][b]==-inf) cout << "-Infinity\n"; else cout << scan[a][b] << '\n';
        }
        cout << '\n';
    }
    return 0;
}