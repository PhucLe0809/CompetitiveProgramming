#include <bits/stdc++.h>
#define maxarray 805

using namespace std;
int n, m, times = 0, scc = 0;
vector <vector<int>> graph(maxarray), dag(maxarray);
vector <int> low(maxarray), num(maxarray), root(maxarray);
vector <bool> deleted(maxarray, false);
stack <int> sta; 

void DFS(int u){
    low[u] = num[u] = ++times;
    sta.push(u);
    for (auto &v:graph[u]){
        if (deleted[v]) continue;
        if (!num[v]){
            DFS(v);
            low[u] = min(low[u], low[v]);
        }else low[u] = min(low[u], num[v]);
    }
    if (low[u] == num[u]){
        scc++; int v;
        do{
            v = sta.top(); sta.pop();
            deleted[v] = true;
            root[v] = scc;
        }while (v != u);
    }
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
    for (int u = 1; u <= n; u++){
        if (!num[u]) DFS(u);
    }
    for (int u = 1; u <= n; u++){
        for (auto &v:graph[u]){
            if (root[u] != root[v]){
                dag[root[v]].push_back(root[u]);
            }
        }
    }
    int answer = 0;
    for (int u = 1; u <= scc; u++){
        if (!dag[u].size()) answer++;
    }
    cout << answer;
    return 0;
}