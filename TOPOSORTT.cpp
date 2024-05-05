#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> deg(n+1);
    vector <vector<int>> graph(n+1);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        deg[v]++;
    }
    vector <int> topo; int cnt = 0;
    vector <bool> visited(n+1, false);
    priority_queue <int, vector<int>, greater<>> que;
    for (int u = 1; u <= n; u++){
        if (deg[u] || visited[u]) continue; 
        topo.push_back(u); cnt++;
        que.push(u); visited[u] = true;
        while (que.size()){
            u = que.top(); que.pop();
            for (auto &v:graph[u]){
                deg[v]--;
                if (!deg[v]){
                    que.push(v); cnt++;
                    topo.push_back(v); visited[v] = true;
                }
            }
        }
    }
    if (cnt != n){
        cout << "Sandro fails.\n"; return 0;
    }
    for (auto &it:topo) cout << it << " ";
    return 0;
}