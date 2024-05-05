#include <bits/stdc++.h>
#define inf 2000000000000000007
#define maxarray 10005

using namespace std;
vector <int64_t> dis(maxarray);
vector <bool> choose(maxarray);
priority_queue <pair<int64_t, int>, vector <pair<int64_t, int>>, greater<>> que;

void Dijkstra(int s, vector <vector<pair<int64_t, int>>> &graph){
    fill(dis.begin(), dis.end(), inf);
    fill(choose.begin(), choose.end(), false);
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
    int n, m, q, s;
    while (true){
        cin >> n >> m >> q >> s;
        if (n==0) break;
        vector <vector<pair<int64_t, int>>> graph(n);
        int u, v; int64_t w;
        for (int i = 0; i < m; i++){
            cin >> u >> v >> w;
            graph[u].push_back({w, v});
            // graph[v].push_back({w, u});
        }
        Dijkstra(s, graph);
        while (q--){
            cin >> u;
            if (dis[u]!=inf) cout << dis[u];
            else cout << "Impossible";
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}