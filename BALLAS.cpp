#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s, t; cin >> n >> m >> s >> t;
    vector <vector<int>> graph(n+1);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        // graph[v].push_back(u);
    }
    for (int u = 1; u <= n; u++){
        sort(graph[u].begin(), graph[u].end());
    }
    vector <bool> visited(n+1, false);
    vector <int> infront(n+1, -1);
    queue <int> q;
    q.push(s); visited[s] = true; infront[s] = s;
    while (q.size() && infront[t]==-1){
        v = q.front(); q.pop();
        for (auto &it:graph[v]){
            if (!visited[it]){
                q.push(it); visited[it] = true;
                infront[it] = v;
            }
        }
    }
    stack <int> sta;
    for (int u = t; infront[u]!=u; u = infront[u]){
        sta.push(u);
    }
    sta.push(s);
    while (sta.size()){
        cout << sta.top() << " "; sta.pop();
    }
    return 0;
}