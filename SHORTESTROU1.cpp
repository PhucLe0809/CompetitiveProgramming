#include <bits/stdc++.h>
#define inf 1000000000000000007
#define maxarray 100005

using namespace std;

void Dijkstra(int s, vector <vector<pair<int64_t, int>>> &graph, vector <int64_t> &dis){
    fill(dis.begin(), dis.end(), inf);
    vector <bool> choose(maxarray, false);
    priority_queue <pair<int64_t, int>, vector <pair<int64_t, int>>, greater<>> que;
    que.push({0, s}); dis[s] = 0;
    int u, v; int64_t w;
    while (que.size()){
        auto pivot = que.top(); que.pop();
        u = pivot.second;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &it:graph[u]){
            v = it.second; w = it.first;
            if (dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                que.push({dis[v], v});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <vector<pair<int64_t, int>>> graph(n+1);
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }
    vector <int64_t> dis(n+1);
    Dijkstra(1, graph, dis);
    for (int u = 1; u <= n; u++) cout << dis[u] << " ";
    return 0;
}