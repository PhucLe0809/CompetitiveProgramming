#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int h[maxarray], up[maxarray][11];
vector <int> tree[maxarray];

void dfs(int u){
    for (auto &v:tree[u]){
        if (v == up[u][0]) continue;
        h[v] = h[u]+1; up[v][0] = u;
        for (int j = 1; j < 11; j++) up[v][j] = up[up[v][j-1]][j-1];
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int cnt = 0;
    while (test--){
        int n; cin >> n;
        for (int i = 1; i <= n; i++) tree[i].clear();
        int m, u, v;
        for (u = 1; u <= n; u++){
            cin >> m;
            for (int i = 0; i < m; i++){
                cin >> v; tree[u].push_back(v);
            }
        }
        up[1][0] = 1; h[1] = 0; dfs(1);
        cout << "Case " << ++cnt << ":\n";
        int q; cin >> q;
        while (q--){
            cin >> u >> v;
            cout << lca(u, v) << '\n';
        }
    }
    return 0;
}