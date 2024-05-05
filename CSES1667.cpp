#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int visited[maxarray];
int trace[maxarray];
vector <int> graph[maxarray];

void bfs(int s, int t){
    queue <int> que;
    que.push(s); visited[s] = 1;
    while (que.size() && !visited[t]){
        int u = que.front(); que.pop();
        for (auto &v:graph[u]){
            if (visited[v]) continue;
            que.push(v);
            visited[v] = 1;
            trace[v] = u;
        }
    }
}
vector<int> trace_path(int s, int t){
    int u = t;
    vector <int> path;
    while (u != s){
        path.push_back(u);
        u = trace[u];
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
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
    bfs(1, n);
    if (!visited[n]){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    vector <int> path = trace_path(1, n);
    cout << path.size() << '\n';
    for (auto &it:path) cout << it << " ";
    return 0;
}