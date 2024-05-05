#include <bits/stdc++.h>
#define inf 1000000000000000007
#define maxarray 1005

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
    int n, m, k; cin >> n >> m >> k;
    vector <vector<pair<int64_t, int>>> graph(n+1);
    vector <pair<int64_t, pair<int, int>>> edge;
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
        edge.push_back({w, {u, v}});
    }
    vector <vector<int64_t>> scan(n+1, vector <int64_t> (n+1));
    for (u = 1; u <= n; u++){
        Dijkstra(u, graph, scan[u]);
    }
    vector <pair<int, int>> inp;
    for (int i = 0; i < k; i++){
        cin >> u >> v;
        inp.push_back({u, v});
    }
    int64_t answer = inf;
    int a, b;
    for (int i = 0; i < m; i++){
        w = edge[i].first;
        u = edge[i].second.first; v = edge[i].second.second;
        int64_t calc = 0;
        for (int j = 0; j < k; j++){
            a = inp[j].first; b = inp[j].second;
            calc += min({scan[a][u]+scan[v][b], scan[a][v]+scan[u][b], scan[a][b]});
            // cout << min(scan[a][u]+scan[v][b], scan[a][v]+scan[u][b]) << " ";
        }
        answer = min(answer, calc);
        // cout << calc << endl;
    }
    cout << answer << '\n';
    return 0;
}