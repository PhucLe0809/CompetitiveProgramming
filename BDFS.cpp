#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <bool> visited(maxarray, false);

void BFS(int u){
    queue <int> q;
    q.push(u); visited[u] = true;
    int v;
    while (q.size()){
        v = q.front(); q.pop();
        for (auto &it:graph[v]){
            if (!visited[it]){
                q.push(it);
                visited[it] = true;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int component = 0;
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            component++; BFS(u);
        }
    }
    cout << component;
    return 0;
}