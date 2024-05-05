#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n;
int par[maxarray], ele[maxarray];
int64_t dis[maxarray];
vector <int> graph[maxarray];
vector <int> topo;

void dfs(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        par[v] = u; dfs(v, u);
    }
    topo.push_back(u);
}
void dfs_calc(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dis[v] += (dis[u] - (dis[v] + ele[v]) + (n - ele[v]));
        dfs_calc(v, u);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    for (auto &u:topo){
        ele[u] = 1;
        for (auto &v:graph[u]){
            if (v == par[u]) continue;
            ele[u] += ele[v];
        }
    }
    for (auto &u:topo){
        for (auto &v:graph[u]){
            if (v == par[u]) continue;
            dis[u] += (dis[v] + ele[v]);
        }
    }
    // for (int u = 1; u <= n; u++) cout << ele[u] << " "; cout << '\n';
    // for (int u = 1; u <= n; u++) cout << dis[u] << " "; cout << '\n';
    dfs_calc(1, 0);
    for (int u = 1; u <= n; u++) cout << dis[u] << " "; cout << '\n';
    return 0;
}