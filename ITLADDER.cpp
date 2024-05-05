#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
const int mod = 1e9 + 7;
struct SEG{
    vector <int> st;
    vector <pair<int, int>> lazy;

    SEG (int n) : st(4*n), lazy(4*n) {};

    void down(int id, int l, int r){
        if (!lazy[id].first && !lazy[id].second) return;
        int a = lazy[id].first;
        int b = lazy[id].second;
        st[id] += (a * (((r + l) * (r - l + 1) / 2) % mod)) % mod;
        st[id] += ((r - l + 1) * b) % mod;
        if (st[id] < 0) st[id] = (st[id] + mod) % mod;
        if (l != r){
            lazy[2*id].first += a; lazy[2*id].first %= mod;
            lazy[2*id].second += b; lazy[2*id].second %= mod;
            lazy[2*id+1].first += a; lazy[2*id+1].first %= mod;
            lazy[2*id+1].second += b; lazy[2*id+1].second %= mod;
        }
        lazy[id] = {0, 0};
    }
    void update(int id, int l, int r, int u, int v, int a, int b){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            lazy[id].first = a;
            lazy[id].second = (b - u * a) % mod;
            down(id, l, r);
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, u, v, a, b);
        update(2*id+1, mid+1, r, u, v, a, b);
        st[id] = st[2*id] + st[2*id+1];
    }
    int get(int id, int l, int r, int u, int v){
        down(id, l, r);
        if (v < l || u > r) return 0;
        if (u <= l && r <= v){
            if (st[id] < 0) st[id] = (st[id] + mod) % mod;
            return st[id];
        }
        int mid = l + r >> 1;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return (a + b) % mod;
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5);

    while (q--){
        int t; cin >> t;
        if (t == 1){
            int u, v, a, b; cin >> u >> v >> a >> b;
            tree.update(1, 1, n, u, v, a, b);
        }
        if (t == 2){
            int u, v; cin >> u >> v;
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