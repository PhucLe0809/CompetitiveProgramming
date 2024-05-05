#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1005

using namespace std;
vector <int> visited(maxarray);
vector <vector<int>> graph(maxarray);

double calc_distance(pair <int, int> &x, pair <int, int> &y){
    double a = x.first - y.first;
    double b = x.second - y.second;
    return sqrt(a*a + b*b);
}
void dfs(int &u, vector <int> &save){
    save.push_back(u); visited[u] = true;
    for (auto &v:graph[u]){
        if (!visited[v]) dfs(v, save);
    }
}

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.first >> it.second;
    vector <int> deg(n);
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        u--; v--; deg[u]++; deg[v]++;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector <vector<int>> dis(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            dis[i][j] = calc_distance(inp[i], inp[j]);
        }
    }
    double res = 0.0;
    for (int u = 0; u < n; u++){
        if (deg[u]) continue;
        double minn = INT_MAX * 1.0;
        int node = -1;
        for (int v = 0; v < n; v++){
            if (u == v) continue;
            if (dis[u][v] < minn){
                minn = dis[u][v]; node = v;
            }
        }
        res += minn;
        deg[u]++; deg[node]++;
        graph[u].push_back(node);
        graph[node].push_back(u);
    }
    vector <vector<int>> comp;
    for (int u = 0; u < n; u++){
        if (!visited[u]){
            vector <int> save;
            dfs(u, save);
            comp.push_back(save);
        }
    }
    int amount = comp.size();
    for (int i = 0; i < amount; i++){
        for (int j = i+1; j < amount; j++){
            
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}