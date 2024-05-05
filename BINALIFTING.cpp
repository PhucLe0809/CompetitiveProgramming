#include <bits/stdc++.h>

using namespace std;
struct LCA{
    vector <int> par, visited;
    vector <vector<int>> inp, up;
    LCA (int n) : par(n), visited(n), inp(n), up(n, vector <int> (20)) {};

    void dfs(int u){
        visited[u] = true;
        for (auto &v:inp[u]){
            if (v == par[u]) continue;
            par[v] = u; dfs(v);
        }
    }
    void preprocess(int n){
        fill(visited.begin(), visited.end(), false);
        for (int u = 1; u <= n; u++){
            if (!visited[u]){
                par[u] = u; dfs(u);
            }
        }
        for (int u = 1; u <= n; u++) up[u][0] = par[u];
        for (int j = 1; j < 20; j++){
            for (int u = 1; u <= n; u++){
                up[u][j] = up[up[u][j-1]][j-1];
            }
        }
    }
    int ancestor_kth(int u, int k){
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1) u = up[u][j];
        }
        return u;
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
    tree.preprocess(n);
    int q; cin >> q;
    while (q--){
        cin >> u >> v;
        cout << tree.ancestor_kth(u, v) << '\n';
    }
    return 0;
}