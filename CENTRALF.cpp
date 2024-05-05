#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int h[maxarray], up[maxarray][19];
vector <int> tree[maxarray];
struct Edge{
    int v;
    int64_t cost_one;
    int64_t cost_multi;
};
vector <Edge> costs[maxarray];
int64_t f[maxarray];
int64_t answer = 0;

void dfs(int u){
    for (auto &v:tree[u]){
        if (v == up[u][0]) continue;
        h[v] = h[u]+1; up[v][0] = u;
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
void dfs_func(int u){
    for (auto &it:costs[u]){
        int v = it.v;
        int64_t cost_one = it.cost_one;
        int64_t cost_multi = it.cost_multi;
        if (v == up[u][0]) continue;
        dfs_func(v);
        f[u] += f[v];
        answer += min(f[v] * cost_one, cost_multi);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v, cost_one, cost_multi;
    for (int i = 1; i < n; i++){
        cin >> u >> v >> cost_one >> cost_multi;
        tree[u].push_back(v);
        tree[v].push_back(u);
        costs[u].push_back({v, cost_one, cost_multi});
        costs[v].push_back({u, cost_one, cost_multi});
    }
    dfs(1);
    for (int i = 2; i <= n; i++){
        f[i-1]++;
        f[i]++;
        f[lca(i-1, i)] -= 2;
    }
    dfs_func(1);
    cout << answer;
    return 0;
}