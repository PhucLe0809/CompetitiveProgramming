#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
bool impossible = false;
int visited[maxarray];
int h[maxarray], par[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (visited[v] && v == par[par[u]]){
            impossible = true;
        }
        if (visited[v]) continue;
        par[v] = u; h[v] = h[u] + 1;
        dfs(v, u);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            dfs(u, 0);
        }
    }
    if (impossible){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    for (int u = 1; u <= n; u++){
        cout << (h[u] % 2) + 1 << " ";
    }
    return 0;
}