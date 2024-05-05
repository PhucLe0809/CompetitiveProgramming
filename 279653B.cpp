// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define mod 1000000007
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> inp, st, lazy;

    SEG (int n) : inp(n), st(4*n), lazy(4*n, 1) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = 1;
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = (st[2*id] + st[2*id+1]) % mod;
    }
    void down(int id, int l, int r){
        if (lazy[id] == 1) return;
        st[id] = ((st[id] % mod) * (lazy[id] % mod)) % mod;
        if (l != r){
            lazy[2*id] = ((lazy[2*id] % mod) * (lazy[id] % mod)) % mod;
            lazy[2*id+1] = ((lazy[2*id+1] % mod) * (lazy[id] % mod)) % mod;
        }
        lazy[id] = 1;
    }
    void update(int id, int l, int r, int u, int v, int val){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            lazy[id] = ((lazy[id] % mod) * (val % mod)) % mod;
            down(id, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, u, v, val);
        update(2*id+1, mid+1, r, u, v, val);
        st[id] = (st[2*id] + st[2*id+1]) % mod;
    }
    int get(int id, int l, int r, int u, int v){
        down(id, l, r);
        if (v < l || u > r) return 0;
        if (u <= l && r <= v) return st[id];
        int mid = (l + r) / 2;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return (a + b) % mod;
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5); tree.build(1, 1, n);
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int u, v, val; cin >> u >> v >> val; u++;
            tree.update(1, 1, n, u, v, val);
        }
        if (t == 2){
            int u, v; cin >> u >> v; u++;
            cout << tree.get(1, 1, n, u, v) << endl;
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