#include <bits/stdc++.h>
#define inf 1000000007
#define maxarray 100005

using namespace std;
vector <vector<pair<int, int>>> graph(maxarray);
vector <int> dis(maxarray), trace(maxarray);
vector <bool> choose(maxarray);

void Dijkstra(int s, vector <vector<pair<int, int>>> &graph, vector <int> &dis, vector <int> &trace){
    fill(dis.begin(), dis.end(), inf);
    fill(trace.begin(), trace.end(), -1);
    fill(choose.begin(), choose.end(), false);
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> que;
    dis[s] = 0; que.push({s, dis[s]});
    int u, v, w;
    while (que.size()){
        auto pivot = que.top(); que.pop();
        u = pivot.first;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &it:graph[u]){
            v = it.first; w = it.second;
            if (dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                que.push({v, dis[v]});
                trace[v] = u;
            }
        }
    }
}
vector<int> trace_path(int s, int u, vector <int> &trace){
    if (dis[u]==inf) return vector <int> (0);
    vector <int> path;
    while (u != -1){
        path.push_back(u);
        u = trace[u];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s; cin >> n >> m >> s;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    Dijkstra(s, graph, dis, trace);
    for (int u = 0; u < n; u++){
        if (dis[u] == inf) cout << -1 << '\n';
        else cout << dis[u] << '\n';
    }
    // vector <int> out;
    // for (int u = 0; u < n; u++){
    //     out = trace_path(s, u, trace);
    //     for (auto &v:out) cout << v << " "; cout << '\n';
    // }
    return 0;
}