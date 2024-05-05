// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> st, lazy;

    SEG (int n) : st(4*n), lazy(4*n, -1) {};
    
    void down(int id, int l, int r){
        if (lazy[id] == -1) return;
        st[id] = lazy[id];
        if (l != r){
            lazy[2*id] = lazy[id];
            lazy[2*id+1] = lazy[id];
        }
        lazy[id] = -1;
    }
    void update(int id, int l, int r, int u, int v, int val){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            lazy[id] = val;
            down(id, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, u, v, val);
        update(2*id+1, mid+1, r, u, v, val);
    }
    void get(int id, int l, int r, int u, int v){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            cout << st[id] << endl;
            return;
        }
        int mid = (l + r) / 2;
        get(2*id, l, mid, u, v);
        get(2*id+1, mid+1, r, u, v);
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5);
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int u, v, val; cin >> u >> v >> val; u++;
            tree.update(1, 1, n, u, v, val);
        }
        if (t == 2){
            int u; cin >> u; u++;
            tree.get(1, 1, n, u, u);
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