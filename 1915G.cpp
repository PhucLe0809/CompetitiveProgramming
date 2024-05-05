#include <bits/stdc++.h>
#define inf 1e18
#define int long long
#define maxarray 1005

using namespace std;
struct data{
    int u, v, w;
};
vector <data> edge(2*maxarray);
vector <int> dis(maxarray), mul(maxarray), ind(maxarray);

void bellman_ford(int n, int m, int s, vector <data> &edge, vector <int> &dis, vector <int> &mul){
    fill(dis.begin(), dis.end(), inf);
    dis[s] = 0;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < 2*m; i++){
            int u = edge[i].u;
            int v = edge[i].v;
            int w = edge[i].w * ind[u];
            if (dis[u] != inf && dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                ind[v] = min(ind[v], ind[u]);
            }
        }
    }
}
// void check_neg_cycle(int n, int m, int s, vector <data> &edge, vector <int> &dis, vector <int> &mul){
//     int u, v, w;
//     for (int t = 0; t < n; t++){
//         for (int i = 0; i < m; i++){
//             u = edge[i].u; v = edge[i].v; w = edge[i].w;
//             if (dis[u]!=inf && dis[v] > dis[u]+w){
//                 dis[v] = -inf;
//             }
//         }
//     }
// }

void solve(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < 2*m; i += 2){
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
        edge[i+1] = {edge[i].v, edge[i].u, edge[i].w};
    }
    for (int i = 1; i <= n; i++){
        cin >> mul[i]; ind[i] = mul[i];
    }
    bellman_ford(n, m, 1, edge, dis, mul);
    // check_neg_cycle(n, m, 1, edge, dis, mul);
    cout << dis[n] << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}