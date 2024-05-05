#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m, times = 0, scc = 0;
vector <vector<int>> graph(maxarray), super(maxarray), dag(maxarray);
vector <int> father(maxarray);
vector <bool> visited(maxarray, false);
stack <int> sta;

void DFS(int u, int root){
    visited[u] = true; 
    father[u] = root;
    sta.push(u);
    for (auto &v:graph[u]){
        if (!visited[v]){
            DFS(v, root);
        }else{
            if (sta.empty() || father[v] != father[u]) continue;
            scc++; int id;
            do{
                id = sta.top(); sta.pop();
                dag[scc].push_back(id);
            }while (id != v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int u, v;
    for (int u = 1; u <= n; u++){
        cin >> v;
        graph[u].push_back(v);
        super[v].push_back(u);
        father[u] = u;
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u, u);
    }
    for (int u = 1; u <= n; u++) visited[u] = false;
    vector <int> candies(n+1);
    int sz;
    for (int pivot = 1; pivot <= scc; pivot++){
        queue <int> q; 
        sz = dag[pivot].size();
        for (auto &u:dag[pivot]){
            q.push(u); visited[u] = true;
            candies[u] = sz; 
        }
        while (q.size()){
            u = q.front(); q.pop();
            for (auto &v:super[u]){
                if (!visited[v]){
                    q.push(v); visited[v] = true;
                    candies[v] = candies[u]+1;
                }
            }
        }
    }
    for (int u = 1; u <= n; u++) cout << candies[u] << '\n';
    return 0;
}