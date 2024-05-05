#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> inp[maxarray];
int h[maxarray], up[maxarray][18];

void dfs(int u){
    for (auto &v:inp[u]){
        if (v == up[u][0]) continue;
        h[v] = h[u] + 1; up[v][0] = u;
        for (int j = 1; j < 18; j++) up[v][j] = up[up[v][j-1]][j-1];
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
    int n;
    while (true){
        cin >> n;
        if (n == 0) return 0;
        for (int i = 1; i <= n; i++) inp[i].clear();
        int u, v;
        for (int i = 1; i < n; i++){
            cin >> u >> v;
            inp[u].push_back(v);
            inp[v].push_back(u);
        }
        up[1][0] = 1; h[1] = 0; dfs(1);
        int q; cin >> q;
        char key; int root = 1;
        while (q--){
            cin >> key;
            if (key == '!') cin >> root;
            else{
                cin >> u >> v;
                int uv = lca(u, v);
                int ur = lca(u, root);
                int vr = lca(v, root);
                cout << (uv ^ ur ^ vr) << '\n';
            }
        }
    }
    return 0;
}