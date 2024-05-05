#include <bits/stdc++.h>

using namespace std;
struct KRUS{
    vector <int> parent;
    int weight;
    vector <pair<int, pair<int, int>>> edge;
    
    KRUS (int n) : parent(n) {};
    void init(int n){
        for (int i = 0; i <= n; i++) parent[i] = i;
    }
    int find_set(int v){
        return (v == parent[v])?(v):(parent[v] = find_set(parent[v]));
    }
    void union_set(int u, int v, int w){
        u = find_set(u);
        v = find_set(v);
        if (u != v){
            parent[v] = u;
            weight = max(weight, w);
        }
    }
    void find_mst(int n){
        init(n+1); weight = 0;
        sort(edge.begin(), edge.end());
        for (auto &it:edge){
            int u = it.second.first, v = it.second.second, w = it.first;
            union_set(u, v, w);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v, w;
    KRUS tree(n+5);
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        tree.edge.push_back({w, {u, v}});
    }
    tree.find_mst(n);
    cout << tree.weight;
    return 0;
}