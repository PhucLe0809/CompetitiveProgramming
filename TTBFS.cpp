#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
bool visited[maxarray];
vector <int> graph[maxarray];

void bfs(int u){
    queue <int> que;
    que.push(u); visited[u] = true;
    while (!que.empty()){
        u = que.front(); que.pop();
        cout << u << endl;
        for (auto &v:graph[u]){
            if (!visited[v]){
                que.push(v);
                visited[v] = true;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int u = 1; u <= n; u++) sort(graph[u].begin(), graph[u].end());
    fill(visited, visited + maxarray, false);
    for (int u = 1; u <= n; u++){
        if (!visited[u]) bfs(u);
    }
    return 0;
}