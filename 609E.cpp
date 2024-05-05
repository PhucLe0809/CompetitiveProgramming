#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n, m; int64_t weight = 0LL;
struct __edge{
    int u, v, w, id;
};
vector <__edge> edge;
int parent[maxarray], h[maxarray], up[maxarray][19], maxx[maxarray][19];
vector <bool> choose(maxarray, false);
vector <pair<int, int>> mst[maxarray];

void init(){
    for (int i = 0; i <= n; i++) parent[i] = i;
}
int find_set(int v){
    return (v == parent[v])?(v):(parent[v] = find_set(parent[v]));
}
void union_set(int u, int v, int w, int id){
    int a = find_set(u);
    int b = find_set(v);
    if (a != b){
        parent[b] = a;
        mst[u].push_back({v, w});
        mst[v].push_back({u, w});
        weight += w*1LL; choose[id] = true;
    }
}
bool comp(__edge a, __edge b){ return a.w < b.w; }
void find_mst(){
    init();
    sort(edge.begin(), edge.end(), comp);
    for (auto &it:edge){
        union_set(it.u, it.v, it.w, it.id);
    }
}
void dfs(int u){
    for (auto &it:mst[u]){
        int v = it.first, w = it.second;
        if (v == up[u][0]) continue;
        h[v] = h[u] + 1; up[v][0] = u;
        maxx[v][0] = w;
        for (int j = 1; j < 19; j++){
            up[v][j] = up[up[v][j-1]][j-1];
            maxx[v][j] = max(maxx[v][j-1], maxx[up[v][j-1]][j-1]);
        }
        dfs(v);
    }
}
int query_mst(int u, int v){
    int res = INT_MIN;
    if (h[u] != h[v]){
        if (h[u] < h[v]) swap(u, v);
        int k = h[u] - h[v];
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1){
                res = max(res, maxx[u][j]);
                u = up[u][j];
            }
        }
    }
    if (u == v) return res;
    int k = __lg(h[u]);
    for (int j = k; j >= 0; j--){
        if (up[u][j] != up[v][j]){
            res = max({res, maxx[u][j], maxx[v][j]});
            u = up[u][j]; v = up[v][j];
        }
    }
    return max({res, maxx[u][0], maxx[v][0]});
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v, w, id;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        edge.push_back({u, v, w, i});
    }
    find_mst(); 
    h[1] = 0; up[1][0] = 1; dfs(1);
    vector <int64_t> answer(m);
    for (int i = 0; i < m; i++){
        u = edge[i].u; v = edge[i].v; w = edge[i].w; id = edge[i].id;
        if (choose[id]) answer[id] = weight;
        else{
            int temp = query_mst(u, v);
            answer[id] = weight - temp*1LL + w*1LL;
        }
    }
    for (auto &it:answer) cout << it << '\n';
    return 0;
}