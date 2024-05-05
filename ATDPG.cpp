#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m;
vector <int> graph[maxarray];
vector <bool> visited(maxarray, false);
vector <int> topo;
int dp[maxarray] = {0};

void dfs(int u){
    visited[u] = true;
    for (auto &v:graph[u]){
        if (!visited[v]) dfs(v);
    }
    topo.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int x = 1; x <= n; x++){
        if (!visited[x]) dfs(x);
    }
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