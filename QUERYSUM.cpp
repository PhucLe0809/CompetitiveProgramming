#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
struct SEG{
    vector <int64_t> inp, st;
    SEG (int n) : inp(n), st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = inp[l];
            return;
        }
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = st[2*id] + st[2*id+1];
    }
    void update(int id, int l, int r, int pos, int val){
        if (pos < l || pos > r) return;
        if (l == r){
            st[id] += val; return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, pos, val);
        update(2*id+1, mid+1, r, pos, val);
        st[id] = st[2*id] + st[2*id+1];
    }
    int64_t get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return 0;
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        return get(2*id, l, mid, u, v)+get(2*id+1, mid+1, r, u, v);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    int t, x, y;
    while (q--){
        cin >> t >> x >> y;
        if (t == 1) tree.update(1, 1, n, x, y);
        if (t == 2) cout << tree.get(1, 1, n, x, y) << '\n';
    }
    return 0;
}
