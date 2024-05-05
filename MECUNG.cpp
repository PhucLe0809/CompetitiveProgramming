#include <bits/stdc++.h>
#define node 205
#define edge 40005

using namespace std;
int n, m; bool arr[node][node];
int weight[node][node];
vector <vector<pair<int, int>>> adj(node);
vector <int> deg(node), w(edge);
vector <bool> used(edge, false);

list<int> euler_tour(int u){
    list <int> out;
    out.push_back(u);
    while (!adj[u].empty()){
        int v = adj[u].back().first;
        int id = adj[u].back().second;
        adj[u].pop_back();
        if (used[id]) continue;
        used[id] = true;
        out.push_back(v);
        u = v;
    }

    for (auto it = ++out.begin(); it != out.end(); it++){
        auto part = euler_tour(*it);
        part.pop_back();
        out.splice(it, part);
    }
    return out;
}
bool check(deque <int> &scan){
    int s = 0;
    for (int i = 0; i < scan.size()-1; i++){
        s += weight[scan[i]][scan[i+1]];
        if (s < 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w[i];
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
        arr[u][v] = i; arr[v][u] = i;
        weight[u][v] = weight[v][u] = w[i];
        deg[u]++; deg[v]++;
    }
    for (int i = 1; i <= n; i++){
        if (deg[i]%2 != 0){
            cout << -1; return 0;
        }
    }
    list<int> answer = euler_tour(1);
    int cycle = answer.size();
    if (cycle < m+1){
        cout << -1; return 0;
    }
    deque <int> scan;
    for (auto &it:answer) scan.push_back(it); 
    for (int i = 1; i < cycle; i++){
        if (check(scan)){
            for (auto &it:scan) cout << it << " ";
            break;
        }
        scan.pop_front(); scan.push_back(scan.front());
    }
    return 0;
}