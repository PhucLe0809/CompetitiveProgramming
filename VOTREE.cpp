#include <bits/stdc++.h>
#define maxarray 70005

using namespace std;
int h[maxarray], up[maxarray][18], st[4*maxarray];
vector <int> inp[maxarray];

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
void build(int id, int l, int r){
    if (l == r){
        st[id] = l;
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = lca(st[2*id], st[2*id+1]);
}
int get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return u;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return lca(get(2*id, l, mid, u, v), get(2*id+1, mid+1, r, u, v));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        inp[u].push_back(v);
        inp[v].push_back(u);
    }
    up[1][0] = 1; h[1] = 0; dfs(1);
    build(1, 1, n);
    // for (int u = 1; u <= 10; u++) cout << st[u] << " ";
    while (q--){
        cin >> u >> v;
        cout << get(1, 1, n, u, v) << '\n';
    }
    return 0;
}