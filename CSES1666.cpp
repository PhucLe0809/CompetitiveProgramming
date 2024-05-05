#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int visited[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (visited[v]) continue;
        dfs(v, u);
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
    vector <int> node;
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            node.push_back(u);
            dfs(u, 0);
        }
    }
    cout << node.size() - 1 << '\n';
    for (int i = 0; i < node.size()-1; i++){
        cout << node[i] << " " << node[i+1] << '\n';
    }
    return 0;
}