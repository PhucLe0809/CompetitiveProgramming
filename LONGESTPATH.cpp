#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <bool> visited(maxarray);
vector <int> topo;

void DFS(int u){
    visited[u] = true;
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v);
    }
    topo.push_back(u);
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
    fill(visited.begin(), visited.end(), false);
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u);
    }
    vector <int> dp(n+1);
    int answer = 0;
    for (auto &u:topo){
        for (auto &v:graph[u]){
            dp[u] = max(dp[u], dp[v]+1);
        }
        answer = max(answer, dp[u]);
    }
    cout << answer;
    return 0;
}