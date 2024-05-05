#include <bits/stdc++.h>
#define node 100005
#define edge 200005

using namespace std;
int n, m;
vector <vector<pair<int, int>>> adj(node);
vector <int> degin(node);
vector <bool> used(edge, false);

list<int> euler_tour(int u){
    list<int> out;
    out.push_back(u);
    while (!adj[u].empty()){
        int v = adj[u].back().first;
        int id = adj[u].back().second;
        adj[u].pop_back();
        if (used[id]) continue;
        used[id] = true;
        u = v;
        out.push_back(v);
    }

    for (auto it = ++out.begin(); it != out.end(); it++){
        auto part = euler_tour(*it);
        part.pop_back();
        out.splice(it, part);
    }
    return out;
}
bool check(){
    for (int i = 1; i <= n; i++){
        if (adj[i].size() != degin[i]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back({v, i});
        degin[v]++;
    }
    if (!check()){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    list<int> answer = euler_tour(1);
    if (answer.size() < m+1){
        cout << "IMPOSSIBLE\n"; return 0;
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}