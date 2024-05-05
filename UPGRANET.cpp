#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m;
int par[maxarray], big[maxarray];
int h[maxarray], up[maxarray][19], minn[maxarray][19];
vector <vector<pair<int, int>>> mst(maxarray);
vector <pair<int, pair<int, int>>> edge;

void initmst(){
    for (int v = 1; v <= n; v++){
        par[v] = v; big[v] = 1;
    }
}
int find_set(int v){
    return (v == par[v])?(v):(par[v] = find_set(par[v]));
}
void union_set(int u, int v, int w){
    int a = find_set(u);
    int b = find_set(v);
    if (a != b){
        if (big[a] < big[b]) swap(a, b);
        par[b] = a;
        big[a] += big[b];
        mst[u].push_back({w, v});
        mst[v].push_back({w, u});
    }
}
void MST(){
    initmst();
    sort(edge.begin(), edge.end(), greater<>());
    for (auto &it:edge){
        int u = it.second.first, v = it.second.second, w = it.first;
        union_set(u, v, w);
    }
}
void dfs(int u){
    for (auto &it:mst[u]){
        int v = it.second, w = it.first;
        if (v == up[u][0]) continue;
        h[v] = h[u] + 1; up[v][0] = u;
        minn[v][0] = w;
        for (int j = 1; j < 19; j++){
            up[v][j] = up[up[v][j-1]][j-1];
            minn[v][j] = min(minn[v][j-1], minn[up[v][j-1]][j-1]);
        }
        dfs(v);
    }
}
int getmin(int u, int v){
    int res = INT_MAX;
    if (h[u] != h[v]){
        if (h[u] < h[v]) swap(u, v);
        int k = h[u] - h[v];
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1){
                res = min(res, minn[u][j]);
                u = up[u][j];
            }
        }
    }
    if (u == v) return res;
    int k = __lg(h[u]);
    for (int j = k; j >= 0; j--){
        if (up[u][j] != up[v][j]){
            res = min({res, minn[u][j], minn[v][j]});
            u = up[u][j]; v = up[v][j];
        }
    }
    return min({res, minn[u][0], minn[v][0]});
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        edge.push_back({w, {u, v}});
    }
    MST();
    up[1][0] = 1; h[1] = 0; dfs(1);
    int64_t res = 0;
    for (auto &it:edge){
        u = it.second.first; v = it.second.second; w = it.first;
        res += (getmin(u, v) - w)*1LL;
    }
    cout << res << '\n';
    return 0;
}