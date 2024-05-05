#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
vector <vector<int>> graph(maxarray);
vector <int> visited(maxarray);
vector <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &v:graph[u]){
        if (!visited[v]) DFS(v);
        // if (visited[v] == 1){
        //     cout << "-1\n"; exit(0);
        // }
    }
    topo.push_back(u);
    visited[u] = 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    char key;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> key;
            if (key=='1') graph[i].push_back(j);
        }
    }
    for (int u = 0; u < n; u++){
        if (!visited[u]) DFS(u);
    }
    reverse(topo.begin(), topo.end());
    for (auto &it:topo) cout << it+1 << " ";
    return 0;
}