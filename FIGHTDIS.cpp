#include <bits/stdc++.h>
#define inf 1000000000000000007
#define maxarray 100005

using namespace std;

void Dijkstra(int s, vector <vector<pair<int64_t, int>>> &graph, vector <int64_t> &dis){
    priority_queue <pair<int64_t, int>,  vector <pair<int64_t, int>>, greater<>> que;
    fill(dis.begin(), dis.end(), inf);
    vector <bool> choose(maxarray, false);
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
    vector <vector<pair<int64_t, int>>> graph(n+1), rever(n+1);
    vector <pair<int64_t, pair<int, int>>> edge;
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        rever[v].push_back({w, u});
        edge.push_back({w, {u, v}});
    }
    vector <int64_t> start(n+1), thend(n+1);
    Dijkstra(1, graph, start);
    Dijkstra(n, rever, thend);
    int64_t answer = inf;
    for (int i = 0; i < m; i++){
        w = edge[i].first; 
        u = edge[i].second.first; v = edge[i].second.second;
        answer = min(answer, start[u]+thend[v]+w/2);
    }
    cout << answer;
    return 0;
}