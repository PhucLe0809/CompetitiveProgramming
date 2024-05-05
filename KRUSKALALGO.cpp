#include <bits/stdc++.h>

using namespace std;
vector <pair<int, pair<int, int>>> edge;
struct DSU{
    vector <int> par;
    int64_t weight;
    vector <pair<int, pair<int, int>>> edge, mst;

    DSU (int n) : par(n), weight(0) {};
    void init(int n){
        for (int i = 0; i <= n; i++) par[i] = i;
    }
    int find_set(int v){
        return (v == par[v])?(v):(par[v] = find_set(par[v]));
    }
    void union_set(int u, int v, int w){
        u = find_set(u);
        v = find_set(v);
        if (u != v){
            par[v] = u;
            mst.push_back({w, {u, v}});
            weight += w*1LL;
        }
    }
    void find_mst(int n){
        init(n+5);
        sort(edge.begin(), edge.end());
        int u, v, w;
        for (auto &it:edge){
            u = it.second.first; v = it.second.second; w = it.first;
            union_set(u, v, w);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v, w;
    DSU tree(n+5);
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        tree.edge.push_back({w, {u, v}});
    }
    tree.find_mst(n);
    cout << tree.weight;
    return 0;
}