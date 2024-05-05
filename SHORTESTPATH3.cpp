#include <bits/stdc++.h>
#define inf 2000000000000000007
#define maxarray 10005

using namespace std;
struct bell{
    int u, v; int64_t w;
};
vector <bell> edge(maxarray);
vector <int64_t> dis(maxarray);

void bellman_ford(int n, int m, int s, vector <bell> &edge, vector <int64_t> &dis){
    fill(dis.begin(), dis.end(), inf);
    dis[s] = 0;
    int u, v; int64_t w;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
            }
        }
    }
}
void check_neg_cycle(int n, int m, int s, vector <bell> &edge, vector <int64_t> &dis){
    int u, v; int64_t w;
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
    while (true){
        int n, m, q, s;
        cin >> n >> m >> q >> s;
        if (n==0 && m==0 && q==0 && s==0) break;
        for (int i = 0; i < m; i++){
            cin >> edge[i].u >> edge[i].v >> edge[i].w;
        }
        bellman_ford(n, m, s, edge, dis);
        check_neg_cycle(n, m, s, edge, dis);
        int u;
        while (q--){
            cin >> u;
            if (dis[u]==inf) cout << "Impossible\n";
            else{
                if (dis[u]==-inf) cout << "-Infinity\n";
                else cout << dis[u] << '\n';
            }
        }
        cout << '\n';
    }
    return 0;
}