#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
bool visited[maxarray];
vector <int> graph[maxarray];

void dfs(int u, vector <int> &conn){
    visited[u] = true;
    conn.push_back(u);
    for (auto &v:graph[u]){
        if (!visited[v]) dfs(v, conn);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    fill(visited, visited + maxarray, false);
    vector <vector<int>> out;
    for (int u = 1; u <= n; u++){
        if (!visited[u]){
            vector <int> conn;
            dfs(u, conn);
            sort(conn.begin(), conn.end());
            out.push_back(conn);
        }
    }
    cout << out.size() << endl;
    for (auto &it:out){
        vector <int> conn = it; 
        int len = conn.size();
        cout << len << " ";        
        for (int i = 0; i < len; i++){
            cout << conn[i];
            if (i != len - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}