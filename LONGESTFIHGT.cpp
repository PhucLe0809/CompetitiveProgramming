#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <int> visited(maxarray), root(maxarray, 0);
vector <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v);
        if (visited[v] == 1){
            cout << "IMPOSSIBLE\n"; exit(0);
        }
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
    int t = 0;
    while (topo[t]!=n){
        if (topo[t]==1){
            cout << "IMPOSSIBLE\n"; return 0;
        }
        t++;
    }
    vector <int> dp(n+1);
    vector <int> trace(n+1, -1);
    int longest; root[n] = true;
    for (int k = t+1; k < n; k++){
        u = topo[k];
        for (auto &v:graph[u]){
            if (root[v]){
                if (dp[u] < dp[v]+1){
                    dp[u] = dp[v]+1;
                    trace[u] = v;
                }
                root[u] = true;
            }
        }
        if (u == 1){
            longest = dp[u]; break;
        }
    }
    if (root[1] == false){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    vector <int> path(1, 1);
    for (v = trace[1]; v != -1; v = trace[v]){
        path.push_back(v);
    }
    cout << path.size() << '\n';
    for (auto &it:path) cout << it << " "; 
    return 0;
}