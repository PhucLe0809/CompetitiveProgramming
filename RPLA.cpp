#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
vector <int> visited(maxarray);
vector <int> topo;

void DFS(int u, vector <vector<int>> &graph){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v, graph);
    }
    topo.push_back(u);
    visited[u] = 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int t = 1;
    while (t <= test){
        int n, m; cin >> n >> m;
        vector <vector<int>> graph(n);
        int u, v;
        for (int i = 0; i < m; i++){
            cin >> u >> v;
            graph[u].push_back(v);
        }
        fill(visited.begin(), visited.end(), 0);
        topo.clear();
        for (int u = 0; u < n; u++){
            if (!visited[u]) DFS(u, graph);
        }
        vector <int> dp(n);
        vector <pair<int, int>> scan;
        for (auto &u:topo){
            for (auto &v:graph[u]){
                dp[u] = max(dp[u], dp[v]+1);
            }
            scan.push_back({dp[u], u});
        }
        sort(scan.begin(), scan.end());
        cout << "Scenario #" << t << ":\n";
        for (auto &it:scan){
            cout << it.first+1 << " " << it.second << '\n';
        }
        t++;
    }
    return 0;
}