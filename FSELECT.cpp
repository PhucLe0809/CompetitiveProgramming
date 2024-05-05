#include <bits/stdc++.h>

using namespace std;
struct LCA{
    vector <int> h;
    vector <vector<int>> inp, up;
    LCA (int n) : h(n), inp(n), up(n, vector <int> (19)) {};

    void dfs(int u){
        for (auto &v:inp[u]){
            h[v] = h[u] + 1;
            for (int j = 1; j < 19; j++) up[v][j] = up[up[v][j-1]][j-1];
            dfs(v);
        }
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
    int dis(int u, int v){
        int p = lca(u, v);
        return h[u] + h[v] - 2*h[p];
    }
    int diam(vector <int> &scan){
        int a = scan[0], b, maxx, d;
        maxx = -1;
        for (auto &v:scan){
            d = dis(a, v);
            if (maxx < d){
                maxx = d; b = v;
            }
        }
        maxx = -1;
        for (auto &v:scan){
            d = dis(b, v);
            if (maxx < d){
                maxx = d;
            }
        }
        return maxx;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    LCA tree(n+1);
    int root, x, u;
    vector <vector<int>> group(k+1);
    for (int i = 1; i <= n; i++){
        cin >> x >> u;
        group[x].push_back(i);
        tree.up[i][0] = u;
        tree.inp[u].push_back(i);
        if (u == 0) root = i;
    }
    tree.dfs(root);
    for (int g = 1; g <= k; g++){
        cout << tree.diam(group[g]) << '\n';
    }
    return 0;
}
