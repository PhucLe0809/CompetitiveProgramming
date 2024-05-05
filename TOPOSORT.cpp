#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
vector <vector<int>> graph(maxarray);
vector <int> visited(maxarray);
stack <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (!visited[v]){
            DFS(v);
        }
        if (visited[u]==1){
            cout << "not DAG\n"; return 0;
        }
    }
    topo.push(u);
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
    fill(visited.begin(), visited.end(), 0);
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u);
    }
    vector <int> answer(n+1);
    int cnt = 0;
    while (topo.size()){
        answer[topo.top()] = ++cnt;
        topo.pop();
    }
    for (int u = 1; u <= n; u++) cout << answer[u] << " ";
    return 0;
}