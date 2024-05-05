#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
struct __edge{
    int u, v, w, id;
};
struct DSU{
    vector <int> parent;

    void init(int n){
        parent.resize(n+5, 0);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }
    int find_set(int v){
        return (v == parent[v])?(v):(parent[v] = find_set(parent[v]));
    }
    void union_set(int u, int v){
        u = find_set(u);
        v = find_set(v);
        if (u != v) parent[v] = u;
    }
} tree;
int n, m, times = 0;
vector <__edge> edge;
int low[maxarray], num[maxarray], answer[maxarray];
vector <pair<int, int>> graph[maxarray];
bool comp(__edge a, __edge b) { return a.w < b.w; }

void dfs(int u, int indx){
    num[u] = low[u] = ++times;
    for (auto &it:graph[u]){
        int v = it.first, id = it.second;
        if (id == indx) continue;
        if (num[v] == 0){
            dfs(v, id);
            low[u] = min(low[u], low[v]);
            if (low[v] == num[v]) answer[id] = 2;
        }else low[u] = min(low[u], num[v]);
    }
}
void solve(vector <__edge> &scan){
    for (auto &it:scan){
        it.u = tree.find_set(it.u); it.v = tree.find_set(it.v);
        graph[it.u].clear(); graph[it.v].clear();
        num[it.u] = num[it.v] = 0;
    }
    for (auto &it:scan){
        if (it.u == it.v){
            answer[it.id] = 0;
        }else{
            answer[it.id] = 1;
            graph[it.u].push_back({it.v, it.id});
            graph[it.v].push_back({it.u, it.id});
        }
    }
    for (auto &it:scan){
        if (num[it.u] == 0) dfs(it.u, -1);
    }
    for (auto &it:scan){
        tree.union_set(it.u, it.v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        edge.push_back({u, v, w, i});
    }
    tree.init(n);
    sort(edge.begin(), edge.end(), comp);
    vector <__edge> scan;
    for (auto &it:edge){
        if (!scan.empty() && scan.back().w == it.w){
            scan.push_back(it);
        }else{
            solve(scan);
            scan = {it};
        }
    }
    solve(scan);
    for (int i = 0; i < m; i++){
        switch (answer[i]){
            case 0: cout << "none\n"; break;
            case 1: cout << "at least one\n"; break;
            case 2: cout << "any\n"; break;
        }
    }
    return 0;
}