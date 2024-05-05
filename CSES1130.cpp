#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int par[maxarray];
bool visited[maxarray], tick[maxarray];
vector <int> graph[maxarray];
vector <int> topo;

void dfs(int u){
    visited[u] = true;
    for (auto &v:graph[u]){
        if (visited[v]) continue;
        par[v] = u; dfs(v);
    }
    topo.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    fill(visited, visited + maxarray, false);
    dfs(1);
    vector <int> dp(n+1);
    fill(tick, tick + maxarray, false);
    int answer = 0;
    for (auto &u:topo){
        int cnt = 0;
        for (auto &v:graph[u]){
            if (v == par[u]) continue;
            if (!tick[v]) cnt++;
            dp[u] += dp[v];
        }
        if (cnt > 0){
            dp[u]++; tick[u] = true;
        }
        // cout << u << " " << dp[u] << endl;
        answer = max(answer, dp[u]);
    }
    // for (int i = 1; i <= n; i++) cout << dp[i] << " "; cout << '\n';
    cout << answer;
    return 0;
}