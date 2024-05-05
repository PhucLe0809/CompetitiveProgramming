#include <bits/stdc++.h>
#define maxarray 29

using namespace std;
vector <vector<int>> graph(maxarray);
vector <int> visited(maxarray);
stack <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v);
        if (visited[v]==1){
            cout << "Impossible\n"; exit(0);
        }
    }
    topo.push(u);
    visited[u] = 2;
}
void build_arcs(string x, string y){
    for (int i = 0; i < min(x.size(), y.size()); i++){
        if (x[i]!=y[i]){
            graph[x[i]-'a'].push_back(y[i]-'a');
            return;
        }
    }
    if (x.size() > y.size()){
        cout << "Impossible\n"; exit(0);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <string> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        if (i!=0) build_arcs(inp[i-1], inp[i]);
    }
    for (int u = 0; u < 26; u++){
        if (!visited[u]) DFS(u);
    }
    while (topo.size()){
        cout << char(topo.top()+'a');
        topo.pop();
    }
    return 0;
}