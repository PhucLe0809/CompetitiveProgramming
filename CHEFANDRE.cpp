#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<pair<int, int>>> graph(maxarray);

int BFS(int s, int t, int n){
    vector <int> dis(n+1, INT_MAX);
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> que;
    que.push({0, s}); dis[s] = 0;
    int u, v, w;
    pair <int, int> tmp;
    while (que.size()){
        tmp = que.top(); que.pop();
        u = tmp.second;
        for (auto &it:graph[u]){
            v = it.second; w = it.first;
            if (dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                que.push({dis[v], v});
            }
            // if (v == t) return dis[t];
        }
    }
    if (dis[t]==INT_MAX) return -1; else return dis[t];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back({0, v});
        graph[v].push_back({1, u});
    }
    int answer = BFS(1, n, n);
    cout << answer;
    return 0;
}