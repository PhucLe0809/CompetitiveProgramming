// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
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
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = max(st[2*id], st[2*id+1]);
    }
    void update(int id, int l, int r, int x, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = val;
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, x, val);
        update(2*id+1, mid+1, r, x, val);
        st[id] = max(st[2*id], st[2*id+1]);
    }
    int get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return LONG_MIN;
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return max(a, b);
    }
};

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    while (m--){
        int t; cin >> t;
        if (t == 1){
            int u, v; cin >> u >> v; u++;
            tree.update(1, 1, n, u, v);
        }
        if (t == 2){
            int x, k; cin >> x >> k; k++;
            int l = k, r = n;
            while (l < r){
                int mid = l + r >> 1;
                int maxx = tree.get(1, 1, n, k, mid);
                if (maxx >= x) r = mid;
                else l = mid + 1;
            }
            if (l > n || tree.get(1, 1, n, l, l) < x) cout << -1 << endl;
            else cout << l - 1 << endl;
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