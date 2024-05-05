#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 10005

using namespace std;
int dis[maxarray];
vector <pair<int, int>> graph[maxarray];

void dijkstra(int n, int m, int s, int t){
    fill(dis, dis + maxarray, LONG_MAX);
    priority_queue <pair<int, int>, vector<pair<int, int>>, greater<>> que;
    dis[s] = 0; que.push({s, dis[s]});
    while (que.size()){
        auto pivot = que.top(); que.pop();
        int u = pivot.first;
        for (auto &it:graph[u]){
            int v = it.first, w = it.second;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                que.push({v, dis[v]});
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, s, t; cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    dijkstra(n, m, s, t);
    cout << dis[t];
    return 0;
}