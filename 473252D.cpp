#include <bits/stdc++.h>
#define maxarray 100005
#define inf 1000000000000000007
 
using namespace std;
vector <bool> choose(maxarray);
vector <int64_t> dis(maxarray);
vector <vector<int64_t>> excep;
vector <pair<int, int64_t>> graph[maxarray];
set <pair<int, int>> bad;
struct LCA{
    vector <int> h;
    vector <int64_t> dis;
    vector <vector<int>> up;
    LCA (int n) : h(n), dis(n), up(n, vector <int> (18)) {};

    void dfs(int u){
        choose[u] = true;
        for (auto &it:graph[u]){
            int v = it.first, w = it.second;
            if (choose[v]) continue;
            up[v][0] = u; h[v] = h[u] + 1;
            dis[v] = dis[u] + w;
            for (int j = 1; j < 18; j++) up[v][j] = up[up[v][j-1]][j-1];
            dfs(v);
            if (u < v) bad.erase({u, v});
            else bad.erase({v, u});
        }
    }
    void preprocess(int s){
        up[s][0] = s; dfs(s);
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
    int64_t solve(int u, int v){
        int p = lca(u, v);
        return dis[u] + dis[v] - 2*dis[p];
    }
};

vector<int64_t> dijkstra(int s){
    fill(choose.begin(), choose.end(), false);
    fill(dis.begin(), dis.end(), inf);
    priority_queue <pair<int64_t, int>, vector <pair<int64_t, int>>, greater<>> que;
    que.push({0, s}); dis[s] = 0;
    int u, v; int64_t w;
    while (que.size()){
        auto it = que.top(); que.pop();
        u = it.second;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &node:graph[u]){
            v = node.first; w = node.second;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                que.push({dis[v], v});
            }
        }
    }
    return dis;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    for (int i = 1; i <= n; i++){
        for (auto &it:graph[i]){
            if (i < it.first) bad.insert({i, it.first});
        }
    }
    LCA tree(n+5);
    fill(choose.begin(), choose.end(), false);
    tree.preprocess(1);
    for (auto &it:bad){
        excep.push_back(dijkstra(it.first));
    }
    int q; cin >> q;
    int64_t answer;
    while (q--){
        cin >> u >> v;
        answer = tree.solve(u, v);
        for (int i = 0; i < bad.size(); i++){
            answer = min(answer, excep[i][u] + excep[i][v]);
        }
        cout << answer << '\n';
    }
    return 0;
}