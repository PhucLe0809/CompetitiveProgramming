#include <bits/stdc++.h>

using namespace std;
struct LCA{
    vector <int> h, dis;
    vector <vector<int>> up;
    vector <vector<pair<int, int>>> inp;
    LCA (int n) : h(n), dis(n), up(n, vector <int> (10)), inp(n) {};

    void dfs(int u){
        for (auto &it:inp[u]){
            int v = it.first, w = it.second;
            if (v == up[u][0]) continue;
            up[v][0] = u; h[v] = h[u] + 1;
            dis[v] = dis[u] + w;
            for (int j = 1; j < 10; j++) up[v][j] = up[up[v][j-1]][j-1];
            dfs(v);
        }
    }
    void preprocess(int s){
        up[s][0] = s; dfs(s);
    }
    int lca(int u, int v){
        if (h[u] != h[v]){
            if (h[u] < h[v]) swap(u, v);
            int k = h[u] - h[v];
            for (int j = 0; (1 << j) <= k; j++){
                if ((k >> j) & 1) u = up[u][j];
            }
        }
        if (u == v) return u;
        int k = __lg(h[u]);
        for (int j = k; j >= 0; j--){
            if (up[u][j] != up[v][j]){
                u = up[u][j]; v = up[v][j];
            }
        }
        return up[u][0];
    }
    int solve(int u, int v){
        int p = lca(u, v);
        return dis[u] + dis[v] - 2*dis[p];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    LCA tree(n+5);
    int u, v, w;
    for (int i = 1; i < n; i++){
        cin >> u >> v >> w;
        tree.inp[u].push_back({v, w});
        tree.inp[v].push_back({u, w});
    }
    tree.preprocess(1);
    while (q--){
        cin >> u >> v;
        cout << tree.solve(u, v) << '\n';
    }
    return 0;
}