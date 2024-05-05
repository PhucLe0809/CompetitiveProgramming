#include <bits/stdc++.h>
#define maxarray 100005
 
using namespace std;
pair <int, int> pivot = {-1, -1};
int visited[maxarray];
int par[maxarray];
vector <int> graph[maxarray];
vector <int> circuit;

void dfs(int u, int pre){
    if (pivot.first != -1) return;
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (visited[v] == 0){
            par[v] = u; 
            dfs(v, u);
        }
        if (visited[v] == 1){
            if (pivot.first == -1) pivot = {v, u};
            return;
        }
    }
    visited[u] = 2;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            dfs(u, 0);
        }
    }
    if (pivot.first == -1){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    int root = pivot.first; u = pivot.second;
    // cout << root << " " << u << endl; 
    circuit.push_back(root);
    while (u != root){
        circuit.push_back(u);
        u = par[u];
    }
    circuit.push_back(root);
    reverse(circuit.begin(), circuit.end());
    cout << circuit.size() << '\n';
    for (auto &it:circuit) cout << it << " ";
    return 0;
}