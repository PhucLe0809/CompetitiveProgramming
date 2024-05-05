#include <bits/stdc++.h>
#define int long long
#define inf 1000000000000000007
#define maxarray 10005

using namespace std;
vector <vector<pair<int, int>>> graph(maxarray);
vector <int> dis(maxarray);
vector <bool> choose(maxarray);

void dijkstra(int s, vector <vector<pair<int, int>>> &graph, vector <int> &dis){
    fill(dis.begin(), dis.end(), inf);
    fill(choose.begin(), choose.end(), false);
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> que;
    dis[s] = 0; que.push({s, dis[s]});
    int u, v, w;
    while (que.size()){
        auto pivot = que.top(); que.pop();
        u = pivot.first;
        // if (choose[u]) continue;
        // choose[u] = true;
        for (auto &it:graph[u]){
            v = it.first; w = it.second;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                que.push({v, dis[v]});
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s, t; cin >> n >> m >> s >> t;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    dijkstra(s, graph, dis);
    cout << dis[t];
    return 0;
}