#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<pair<int, int>>> graph(maxarray);

int64_t Prim(int s, int n){
    vector <int> dis(n+1, INT_MAX);
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> que;
    dis[s] = 0; que.push({0, s});
    int64_t weight = 0;
    while (que.size()){
        auto it = que.top(); que.pop();
        int d = it.first, u = it.second;
        if (d != dis[u]) continue;
        weight += dis[u]*1LL; dis[u] = INT_MIN;
        for (auto &tmp:graph[u]){
            int v = tmp.first, w = tmp.second;
            if (dis[v] > w){
                dis[v] = w; que.push({dis[v], v});
            }
        }
    }
    return weight;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    cout << Prim(1, n);
    return 0;
}