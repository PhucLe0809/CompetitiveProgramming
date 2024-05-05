#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, big, mx;

    DSU (int n) : par(n), big(n), mx(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            big[v] = 1;
            mx[v] = v;
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
            mx[a] = max(mx[a], mx[b]);
        }
    }
    int query(int v){
        return mx[find_set(v)];
    }
};

void GOTOHANOI(){
    int n; cin >> n;
    DSU tree(n+5); tree.init(n+5);
    for (int i = 0; i < n; i++){
        int v; cin >> v;
        int u = tree.query(v);
        if (u > n) u = tree.query(1);
        cout << u << " ";
        tree.union_set(u, u+1);
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