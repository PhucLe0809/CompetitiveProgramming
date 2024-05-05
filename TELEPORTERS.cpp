#include <bits/stdc++.h>
#define node 100005
#define edge 200005

using namespace std;
int n, m;
vector <vector<pair<int, int>>> adj(node);
vector <int> degin(node);
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
bool check(){
    if (adj[1].size()!=degin[1]+1 || adj[n].size()!=degin[n]-1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (adj[i].size()!=degin[i]) return false;
    }
    return true;
}
void no_solution(){
    cout << "IMPOSSIBLE\n"; exit(0);
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
    if (!check()) no_solution();
    adj[n].push_back({1, m});
    list<int> answer = euler_tour(1);
    if (answer.size() < m+1) no_solution();
    // for (auto &it:answer) cout << it << " ";
    for (auto u1 = answer.begin(), u2 = ++answer.begin(); u2 != answer.end(); u1++, u2++){
        if (*u1==n && *u2==1){
            for (auto u = u2; u != answer.end(); u++) cout << *u << " ";
            for (auto u = ++answer.begin(); u != u2; u++) cout << *u << " ";
            break;
        }
    }
    return 0;
}