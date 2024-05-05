#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
bool check;
vector <vector<int>> graph(maxarray);
vector <bool> visited(maxarray, false);
vector <int> deg(maxarray);

void DFS(int u){
    visited[u] = true;
    if (check) check = (deg[u]==2);
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v);
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
        deg[u]++; deg[v]++;
    }
    int circuit = 0;
    for (u = 1; u <= n; u++){
        if (!visited[u]){
            check = true;
            DFS(u);
            if (check) circuit++;
        }
    }
    cout << circuit;
    return 0;
}