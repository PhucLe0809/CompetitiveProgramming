#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s; cin >> n >> m >> s;
    vector <vector<int>> graph(n+1);
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector <int> step(n+1, -1);
    queue <int> q;
    vector <pair<int, int>> scan;
    q.push(s); step[s] = 0;
    scan.push_back({0, s});
    while (q.size()){
        v = q.front(); q.pop();
        for (auto &it:graph[v]){
            if (step[it]==-1){
                q.push(it); step[it] = step[v]+1;
                scan.push_back({step[it], it});
            }
        }
    }
    sort(scan.begin(), scan.end());
    for (auto &it:scan) cout << it.second << " " << it.first << '\n';
    return 0;
}