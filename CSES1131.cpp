#include <bits/stdc++.h>
#define maxarray 200005
 
using namespace std;
int h[maxarray];
bool visited[maxarray];
vector <int> graph[maxarray];

void pre_dfs(){
    fill(visited, visited + maxarray, false);
    fill(h, h + maxarray, 0);
}
void dfs(int u){
    visited[u] = true;
    for (auto &v:graph[u]){
        if (visited[v]) continue;
        h[v] = h[u]+1; dfs(v);
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int answer = -1, node = 0;
    pre_dfs(); dfs(1);
    for (int u = 1; u <= n; u++){
        if (answer < h[u]){
            answer = h[u]; node = u;
        }
    }
    pre_dfs(); dfs(node); answer = -1;
    for (int u = 1; u <= n; u++){
        if (answer < h[u]){
            answer = h[u]; node = u;
        }
    }
    cout << answer;
    return 0;
}