#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> inp;
    vector <array<int, 105>> st, lazy;

    SEG (int n) : inp(n), st(4*n), lazy(4*n) {};

    void build(int n){
        for (int id = 0; id < 4*n; id++){
            for (int j = 1; j <= 100; j++){
                st[id][j] = j;
                lazy[id][j] = j;
            }
        }
    }
    void down(int id, int l, int r){
        st[id] = lazy[id];
        if (l != r){
            for (int j = 1; j <= 100; j++){
                lazy[2*id][j] = lazy[id][j];
                lazy[2*id+1][j] = lazy[id][j];
            }
        }
    }
    void update(int id, int l, int r, int u, int v, int old, int val){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            for (int j = 1; j <= 100; j++){
                if (lazy[id][j] == old){
                    lazy[id][j] = val;
                    cout << "999\n";
                }
            }
            down(id, l, r);
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, u, v, old, val);
        update(2*id+1, mid+1, r, u, v, old, val);
    }
    void get(int id, int l, int r, int x){
        down(id, l, r);
        if (x < l || x > r) return;
        if (l == r){
            cout << lazy[id][inp[x]] << " ";
            return;
        }
        int mid = l + r >> 1;
        get(2*id, l, mid, x);
        get(2*id+1, mid+1, r, x);
    }
};

void GOTOHANOI(){
    int n; cin >> n;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(n);
    int q; cin >> q;
    while (q--){
        int u, v, old, val; cin >> u >> v >> old >> val;
        tree.update(1, 1, n, u, v, old, val);
    }
    for (int i = 1; i <= n; i++){
        tree.get(1, 1, n, i);
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