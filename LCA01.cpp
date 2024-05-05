#include <bits/stdc++.h>

using namespace std;
struct LCA{
    vector <vector<int>> inp, up;
    vector <int> h;
    LCA (int n) : inp(n), up(n, vector <int> (20)), h(n) {};

    void dfs(int u){
        for (auto &v:inp[u]){
            if (v == up[u][0]) continue;
            up[v][0] = u; h[v] = h[u]+1;
            for (int j = 1; j < 20; j++) up[v][j] = up[up[v][j-1]][j-1];
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
            for (int j = 1; (1 << j) <= k; j++){
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
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    LCA tree(n+5);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        tree.inp[u].push_back(v);
        tree.inp[v].push_back(u);
    }
    tree.preprocess(1);
    int q; cin >> q;
    while (q--){
        cin >> u >> v;
        cout << tree.lca(u, v) << '\n';
    }
    return 0;
}