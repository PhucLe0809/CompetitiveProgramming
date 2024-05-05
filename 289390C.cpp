#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, big, sorce;

    DSU (int n) : par(n), big(n), sorce(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            big[v] = 1;
            sorce[v] = 0;
        }
    }
    pair<int, int> find_set(int v){
        if (v == par[v]) return {v, sorce[v]};
        auto node = find_set(par[v]);
        par[v] = node.first;
        sorce[v] += node.second - sorce[node.first];
        return {par[v], sorce[v] + sorce[par[v]]};
    }
    void union_set(int u, int v){
        int a = find_set(u).first;
        int b = find_set(v).first;
        if (a != b){
            if (big[a] < big[b]) swap(a, b);
            par[b] = a;
            big[a] += big[b];
            sorce[b] -= sorce[a];
        }
    }
    void add_sorce(int v, int s){
        v = find_set(v).first;
        sorce[v] += s;
    }
    int query(int v){
        return find_set(v).second;
    }
};

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    DSU tree(n+5);
    tree.init(n+5);
    while (m--){
        string type; cin >> type;
        if (type == "join"){
            int u, v; cin >> u >> v;
            tree.union_set(u, v);
        }
        if (type == "add"){
            int v, s; cin >> v >> s;
            tree.add_sorce(v, s);
        }
        if (type == "get"){
            int v; cin >> v;
            cout << tree.query(v) << endl;
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