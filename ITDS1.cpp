// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> inp;
    vector <multiset<int>> st;

    SEG (int n) : inp(n), st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id].insert(inp[l]);
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = st[2*id];
        for (auto &it:st[2*id+1]) st[id].insert(it);
    }
    void update(int id, int l, int r, int x, int old, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id].clear();
            st[id].insert(val);
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, x, old, val);
        update(2*id+1, mid+1, r, x, old, val);
        st[id].erase(st[id].find(old));
        st[id].insert(val);
    }
    int get(int id, int l, int r, int u, int v, int k){
        if (v < l || u > r) return inf;
        if (u <= l && r <= v){
            auto it = lower_bound(st[id].begin(), st[id].end(), k);
            if (it == st[id].end()) return inf;
            else return *it;
        }
        int mid = (l + r) / 2;
        int a = get(2*id, l, mid, u, v, k);
        int b = get(2*id+1, mid+1, r, u, v, k);
        return min(a, b);
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int u, val; cin >> u >> val;
            tree.update(1, 1, n, u, tree.inp[u], val);
            tree.inp[u] = val;
        }
        if (t == 2){
            int u, v, k; cin >> u >> v >> k;
            int res = tree.get(1, 1, n, u, v, k);
            if (res == inf) cout << -1 << endl;
            else cout << res << endl;
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