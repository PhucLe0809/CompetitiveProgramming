#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int times = 0, bridge = 0;
vector <vector<int>> graph(maxarray);
vector <int> low(maxarray, 0), num(maxarray, 0), ispoint(maxarray, 0);

void DFS(int u, int pre){
    times++;
    low[u] = num[u] = times;
    int child = 0;
    for (auto &it:graph[u]){
        if (it == pre) continue;
        if (!num[it]){
            DFS(it, u);
            low[u] = min(low[u], low[it]);
            if (low[it] == num[it]) bridge++;
            child++;
            if (u == pre){
                if (child>1) ispoint[u] = 1;
            }else if (low[it] >= num[u]) ispoint[u] = 1;
        }else low[u] = min(low[u], num[it]);
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
        graph[v].push_back(u);
    }
    for (int u = 1; u <= n; u++){
        if (!num[u]) DFS(u, u);
    }
    int point = 0;
    for (int u = 1; u <= n; u++) point += ispoint[u];
    cout << point << " " << bridge;
    return 0;
}