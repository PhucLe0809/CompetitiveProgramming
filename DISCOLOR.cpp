#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int color[maxarray], answer[maxarray];
vector <int> graph[maxarray];
set <int> node[maxarray];

void dfs(int u, int pre){
    int maxx, big; maxx = big = 0;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
        if (maxx < node[v].size()){
            maxx = node[v].size(); big = v;
        }
    }
    if (big == 0){
        answer[u] = 1; return;
    }
    swap(node[u], node[big]);
    for (auto &v:graph[u]){
        if (v != pre && v != big){
            for (auto &it:node[v]) node[u].insert(it);
            // node[v].clear();
        }
    }
    node[u].insert(color[u]);
    answer[u] = node[u].size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> color[i]; node[i].insert(color[i]);
    }
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) cout << answer[i] << " ";
    return 0;
}