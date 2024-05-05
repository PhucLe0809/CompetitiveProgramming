#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int times = 0, scc = 0;
vector <vector<int>> graph(maxarray);
vector <int> low(maxarray), num(maxarray);
vector <bool> deleted(maxarray, false);
stack <int> sta;

void DFS(int u){
    low[u] = num[u] = ++times;
    sta.push(u);
    for (auto &it:graph[u]){
        if (deleted[it]) continue;
        if (!num[it]){
            DFS(it);
            low[u] = min(low[u], low[it]);
        }else low[u] = min(low[u], num[it]);
    }
    if (low[u] == num[u]){
        scc++; int v;
        do{
            v = sta.top();
            sta.pop();
            deleted[v] = true;
        }while (v!=u);
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
    }
    for (int u = 1; u <= n; u++){
        if (!num[u]) DFS(u);
    }
    cout << scc;
    return 0;
}