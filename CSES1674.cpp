#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
vector <int> graph[maxarray];
vector <int> topo;

void dfs(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    topo.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u;
    for (int v = 2; v <= n; v++){
        cin >> u;
        graph[u].push_back(v);
    }
    dfs(1, 0);
    vector <int> dp(n+1);
    for (auto &u:topo){
        dp[u] = 1;
        for (auto &v:graph[u]){
            dp[u] += dp[v];
        }
    }
    for (int i = 1; i <= n; i++) cout << dp[i]-1 << " "; 
    return 0;
}