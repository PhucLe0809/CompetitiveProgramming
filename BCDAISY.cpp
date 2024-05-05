#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <vector<int>> graph(n+1);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector <bool> visited(n+1, false);
    queue <int> q;
    q.push(1); visited[1] = true;
    while (q.size()){
        v = q.front(); q.pop();
        for (auto &it:graph[v]){
            if (!visited[it]){
                q.push(it);
                visited[it] = true;
            }
        }
    }
    vector <int> out;
    for (int i = 1; i <= n; i++){
        if (!visited[i]) out.push_back(i);
    }
    if (!out.size()) cout << 0;
    else for (auto &x:out) cout << x << '\n';
    return 0;
}