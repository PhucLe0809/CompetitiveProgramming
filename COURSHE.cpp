#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <int> visited(maxarray);
vector <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (visited[v] == 1){
            cout << "IMPOSSIBLE\n"; exit(0);
        }
        if (!visited[v]) DFS(v);
    }
    topo.push_back(u);
    visited[u] = 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u);
    }
    reverse(topo.begin(), topo.end());
    for (auto &it:topo) cout << it << " ";
    return 0;
}