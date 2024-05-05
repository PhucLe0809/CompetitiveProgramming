#include <bits/stdc++.h>
#define maxarray 1005

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
    int m, n; cin >> n >> m;
    int scan[m+1][n+1]; int x;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> x; scan[i][x] = j;
        }
    }
    int a, b; bool check;
    for (int u = 1; u <= n; u++){
        for (int v = 1; v <= n; v++){
            if (u==v) continue;
            check = true;
            for (int i = 1; i <= m && check; i++){
                a = scan[i][u]; b = scan[i][v];
                if (a > b) check = false;
            }
            if (check) graph[u].push_back(v);
        }
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u);
    }
    int answer = 1;
    vector <int> dp(n+1, 1);
    for (auto &u:topo){
        for (auto &v:graph[u]){
            dp[u] = max(dp[u], dp[v]+1);
        }
        answer = max(answer, dp[u]);
    }
    cout << answer;
    return 0;
}