#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b; cin >> n >> a >> b;
    vector <vector<pair<int, int>>> graph(n+1);
    int m, v;
    for (int i = 1; i <= n; i++){
        cin >> m;
        if (m==0) continue;
        cin >> v; graph[i].push_back({0, v});
        for (int j = 1; j < m; j++){
            cin >> v;
            graph[i].push_back({1, v});
        }
    }
    vector <int> dis(n+1, INT_MAX);
    deque <int> q;
    q.push_back(a); dis[a] = 0;
    int u, w;
    while (q.size()){
        u = q.front(); q.pop_front();
        for (auto &it:graph[u]){
            v = it.second; w = it.first;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                if (w!=0) q.push_back(v);
                else q.push_front(v);
            }
        }
    }
    if (dis[b]==INT_MAX) cout << -1; else cout << dis[b];
    return 0;
}