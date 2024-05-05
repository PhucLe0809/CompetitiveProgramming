#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int ele;
int h[maxarray], up[maxarray][19], sz[maxarray];
vector <int> inp[maxarray];

void dfs(int u){
    sz[u] = 1;
    for (auto &v:inp[u]){
        if (v == up[u][0]) continue;
        h[v] = h[u] + 1; up[v][0] = u;
        for (int j = 1; j < 19; j++) up[v][j] = up[up[v][j-1]][j-1];
        dfs(v); sz[u] += sz[v];
    }
}
pair<int, pair<int, int>> lca(int u, int v){
    if (h[u] != h[v]){
        if (h[u] < h[v]) swap(u, v);
        int k = h[u] - h[v];
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1) u = up[u][j];
        }
    }
    if (u == v) return {u, {0, 0}};
    int k = __lg(h[u]);
    for (int j = k; j >= 0; j--){
        if (up[u][j] != up[v][j]){
            u = up[u][j]; v = up[v][j];
        }
    }
    return {up[u][0], {u, v}};
}
int ancestor(int u, int k){
    for (int j = 0; (1 << j) <= k; j++){
        if ((k >> j) & 1) u = up[u][j];
    }
    return u;
}
int query(int u, int v, int n){
    if (u == v) return n;
    auto it = lca(u, v);
    int p = it.first, a = it.second.first, b = it.second.second;
    int dis = h[u] + h[v] - 2*h[p];
    if (dis % 2 != 0) return 0;
    if (h[u] - h[p] == h[v] - h[p]){
        return n - sz[a] - sz[b];
    }
    if (h[u] < h[v]) swap(u, v);
    int kth = ancestor(u, dis/2);
    int child = ancestor(u, dis/2-1);
    return sz[kth] - sz[child];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        inp[u].push_back(v);
        inp[v].push_back(u);
    }
    up[1][0] = 1; h[1] = 0; dfs(1);
    int m; cin >> m;
    while (m--){
        cin >> u >> v;
        cout << query(u, v, n) << '\n';
    }
    return 0;
}