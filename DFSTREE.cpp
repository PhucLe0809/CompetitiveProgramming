#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int times = 0;
vector <int> low(maxarray, 0), num(maxarray, 0), tail(maxarray, 0);

void DFS(int u, int pre){
    times++;
    low[u] = num[u] = times;
    for (auto &it:graph[u]){
        if (it == pre) continue;
        if (!num[it]){
            DFS(it, u);
            low[u] = min(low[u], low[it]);
        }else low[u] = min(low[u], num[it]);
    }
    tail[u] = times;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <vector<int>> graph(n+1);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    DFS(1, 1);
    for (int u = 1; u <= n; u++){
        cout << low[u] << " " << num[u] << " " << tail[u] << '\n';
    }
    return 0;
}