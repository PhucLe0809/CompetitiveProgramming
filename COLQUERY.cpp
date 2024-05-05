#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, big;
    vector <map<int, int>> color;
    
    DSU (int n) : par(n), big(n), color(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            big[v] = 1;
        }
    }
    int find_set(int v){
        return (v == par[v]) ? (v):(par[v] = find_set(par[v]));
    }
    void union_set(int u, int v){
        int a = find_set(u);
        int b = find_set(v);
        if (a != b){
            if (big[a] < big[b]) swap(a, b);
            par[b] = a;
            big[a] += big[b];

            for (auto &it:color[b]) color[a][it.first] += it.second;
        }
    }
    void add_color(int v, int c){
        color[v][c] += 1;
    }
    int query(int v, int c){
        v = find_set(v);
        return( color[v].find(c) != color[v].end()) ? (color[v][c]):(0);
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    DSU tree(n+5); tree.init(n+5);
    for (int i = 1; i <= n; i++){
        int color; cin >> color;
        tree.add_color(i, color);
    }
    while (q--){
        int t, u, v; cin >> t >> u >> v;
        if (t == 1){
            tree.union_set(u, v);
        }
        if (t == 2){
            cout << tree.query(u, v) << endl;
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