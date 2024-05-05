#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <bool> visited(maxarray, false);
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
    int n; cin >> n;
    vector <int64_t> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    for (int k = 2; k < n; k++){
        for (int i = 0; i <= k-2; i++){
            for (int j = i+1; j <= k-1; j++){
                if (inp[k] == inp[i]+inp[j]){
                    graph[i].push_back(k); 
                    graph[j].push_back(k);
                    // cout << i << j << k << endl;
                }
                if (inp[k] < inp[i]+inp[j]) break;
            }
        }
    }
    for (int u = 0; u < n; u++){
        if (!visited[u]) DFS(u);
    }
    vector <int> dp(n, 1);
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