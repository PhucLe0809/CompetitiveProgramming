#include <bits/stdc++.h>
#define inf 1000000007

using namespace std;

void Dijkstra(int s, int n, vector <vector<pair<int64_t, int>>> &graph, vector <int64_t> &dis, vector <int> &trace){
    fill(dis.begin(), dis.end(), inf);
    fill(trace.begin(), trace.end(), -1);
    vector <bool> choose(n+1, false);
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
                trace[v] = u;
            }
        }
    }
}
vector<int> trace_path(int s, int t, vector <int> &trace){
    if (trace[t] == -1) return vector <int> (0);
    vector <int> path(1, t);
    for (int v = trace[t]; v != s; v = trace[v]){
        path.push_back(v);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    vector <vector<pair<int64_t, int>>> graph(n+1);
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    int type;
    vector <int64_t> dis(n+1);
    vector <int> trace(n+1);
    while (k--){
        cin >> type >> u >> v;
        Dijkstra(u, n, graph, dis, trace);
        if (type == 0){
            cout << dis[v] << '\n';
        }else{
            vector <int> path = trace_path(u, v, trace);
            cout << path.size() << " ";
            for (auto &it:path) cout << it << " ";
            cout << '\n';
        }
    }
    return 0;
}