#include <bits/stdc++.h>
#define maxarray 205

using namespace std;
vector <vector<int>> graph(maxarray);

int BFS(int u, int n){
    vector <int> dis(n+1, -1);
    vector <bool> visited(n+1, false);
    queue <int> q; int v;
    q.push(u); visited[u] = true; dis[u] = 0;
    while (q.size()){
        v = q.front(); q.pop();
        for (auto &it:graph[v]){
            if (it == u) return dis[v]+1;
            if (!visited[it]){
                q.push(it); visited[it] = true;
                dis[it] = dis[v]+1;
            }
        }
    }
    return 0;
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
    int answer;
    for (int u = 1; u <= n; u++){
        answer = BFS(u, n);
        if (answer) cout << answer << '\n';
        else cout << "NO WAY\n";
    }
    return 0;
}