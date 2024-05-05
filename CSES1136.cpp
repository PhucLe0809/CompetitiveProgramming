#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int h[maxarray], up[maxarray][20];
int par[maxarray], val[maxarray], answer[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        h[v] = h[u] + 1; up[v][0] = u; par[v] = u;
        for (int j = 1; j < 20; j++) up[v][j] = up[up[v][j-1]][j-1];
        dfs(v, u);
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
void update(int u, int v, int x){
    val[u] += x; val[v] += x;
    int ances = lca(u, v);
    val[ances] -= x; val[par[ances]] -= x;
}
void get_answer(int u, int pre){
    answer[u] = val[u];
    for (auto &v:graph[u]){
        if (v == pre) continue;
        get_answer(v, u);
        answer[u] += answer[v];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    h[1] = 0; par[1] = 0; dfs(1, 0);
    while (m--){
        cin >> u >> v;
        update(u, v, 1);
    }
    get_answer(1, 0);
    for (int i = 1; i <= n; i++) cout << answer[i] << " ";
    return 0;
}