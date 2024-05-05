#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, big;
    DSU (int n) : par(n), big(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            big[v] = 1;
        }
    }
    int find_set(int v){
        return (v == par[v])?(v):(par[v] = find_set(par[v]));
    }
    void union_set(int u, int v){
        int a = find_set(u);
        int b = find_set(v);
        if (a != b){
            if (big[a] < big[b]) swap(a, b);
            par[b] = a;
            big[a] += big[b];
        }
    }
};

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    DSU tree(n+5);
    tree.init(n+5);
    while (m--){
        string type; cin >> type;
        int u, v; cin >> u >> v;
        if (type == "union"){
            tree.union_set(u, v);
        }
        if (type == "get"){
            if (tree.find_set(u) == tree.find_set(v)){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
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