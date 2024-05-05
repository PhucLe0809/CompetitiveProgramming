// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> inp, st;

    SEG (int n) : inp(n), st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = inp[l];
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = min(st[2*id], st[2*id+1]);
    }
    void update(int id, int l, int r, int x, int v){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = v; 
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, x, v);
        update(2*id+1, mid+1, r, x, v);
        st[id] = min(st[2*id], st[2*id+1]);
    }
    int get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return LONG_MAX;
        if (u <= l && r <= v) return st[id];
        int mid = (l + r) / 2;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return min(a, b);
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    while (q--){
        int t, a, b; cin >> t >> a >> b; a++;
        if (t == 1){
            tree.update(1, 1, n, a, b);
        }
        if (t == 2){
            cout << tree.get(1, 1, n, a, b) << endl;
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