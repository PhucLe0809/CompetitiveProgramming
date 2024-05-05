#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <vector<int>> graph(n+1);
        int m, v;
        for (int i = 1; i < n; i++){
            cin >> m;
            for (int j = 0; j < m; j++){
                cin >> v;
                graph[i].push_back(v);
            }
        }
        for (int u = 1; u < n; u++){
            sort(graph[u].begin(), graph[u].end());
        }
        vector <bool> visited(n+1, false);
        vector <int> parent(n+1, -1);
        queue <int> q;
        q.push(1); visited[1] = true; parent[1] = 1;
        while (q.size() && parent[n]==-1){
            v = q.front(); q.pop();
            for (auto &it:graph[v]){
                if (!visited[it]){
                    q.push(it); visited[it] = true;
                    parent[it] = v;
                }
            }
        }
        if (parent[n]==-1) cout << -1 << '\n';
        else{
            stack <int> sta;
            for (int u = n; parent[u]!=u; u = parent[u]){
                sta.push(u);
            }
            sta.push(1);
            cout << sta.size()-1 << '\n';
            while (sta.size()>1){
                cout << sta.top() << " "; sta.pop();
            }
            cout << '\n';
        }
    }
    return 0;
}