#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, dep;

    DSU (int n) : par(n), dep(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            dep[v] = 0;
        }
    }
    void union_set(int u, int v){
        int a = get(u).first;
        int b = get(v).first;
        if (a != b){
            par[a] = b;
            dep[a] = dep[a] + 1;
        }
    }
    pair<int, int> get(int v){
        if (v == par[v]) return {v, 0};
        auto node = get(par[v]);
        par[v] = node.first;
        dep[v] += node.second;
        return {par[v], dep[v]};
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    DSU tree(n+5); tree.init(n+5);
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int u, v; cin >> u >> v;
            tree.union_set(u, v);
        }
        if (t == 2){
            int v; cin >> v;
            cout << tree.get(v).second << endl;
        }
        // for (int i = 1; i <= n; i++) cout << tree.par[i] << " " << tree.dep[i] << endl; cout << endl;
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