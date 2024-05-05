// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> inp, st, fre;

    SEG (int n) : inp(n), st(4*n), fre(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = inp[l]; fre[id] = 1;
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = min(st[2*id], st[2*id+1]);
        if (st[2*id] == st[2*id+1]) fre[id] = fre[2*id] + fre[2*id+1];
        else fre[id] = (st[2*id] < st[2*id+1]) ? (fre[2*id]):(fre[2*id+1]);
    }
    void update(int id, int l, int r, int x, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = val;
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, x, val);
        update(2*id+1, mid+1, r, x, val);
        st[id] = min(st[2*id], st[2*id+1]);
        if (st[2*id] == st[2*id+1]) fre[id] = fre[2*id] + fre[2*id+1];
        else fre[id] = (st[2*id] < st[2*id+1]) ? (fre[2*id]):(fre[2*id+1]);
    }
    pair<int, int> get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return {LONG_MAX, 0};
        if (u <= l && r <= v) return {st[id], fre[id]};
        int mid = (l + r) / 2;
        auto a = get(2*id, l, mid, u, v);
        auto b = get(2*id+1, mid+1, r, u, v);
        if (a.first == b.first) return {a.first, a.second + b.second};
        else if (a.first < b.first) return a; else return b;
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++){
        cin >> tree.inp[i];
    }
    tree.build(1, 1, n);
    while (q--){
        int t, a, b; cin >> t >> a >> b; a++;
        if (t == 1){
            tree.update(1, 1, n, a, b);
        }
        if (t == 2){
            auto res = tree.get(1, 1, n, a, b);
            cout << res.first << " " << res.second << endl;
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