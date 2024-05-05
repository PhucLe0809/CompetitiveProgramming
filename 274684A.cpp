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
        st[id] = st[2*id] + st[2*id+1];
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
        st[id] = st[2*id] + st[2*id+1];
    }
    int get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return 0;
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return a + b;
    }
};

void GOTOHANOI(){
    int n; cin >> n;
    SEG poseven(n+5), posodd(n+5), negeven(n+5), negodd(n+5);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (i % 2 == 0){
            poseven.inp[i] = x;
            posodd.inp[i] = 0;
            negeven.inp[i] = -x;
            negodd.inp[i] = 0;
        }else{
            poseven.inp[i] = 0;
            posodd.inp[i] = x;
            negeven.inp[i] = 0;
            negodd.inp[i] = -x;
        }
    }
    poseven.build(1, 1, n);
    posodd.build(1, 1, n);
    negeven.build(1, 1, n);
    negodd.build(1, 1, n);
    int m; cin >> m;
    while (m--){
        int t, u, v; cin >> t >> u >> v;
        if (t == 0){
            if (u % 2 == 0){
                poseven.update(1, 1, n, u, v);
                negeven.update(1, 1, n, u, -v);
            }else{
                posodd.update(1, 1, n, u, v);
                negodd.update(1, 1, n, u, -v);
            }
        }
        if (t == 1){
            int pos, neg;
            if (u % 2 == 0){
                pos = poseven.get(1, 1, n, u, v);
                neg = negodd.get(1, 1, n, u, v);
            }else{
                pos = posodd.get(1, 1, n, u, v);
                neg = negeven.get(1, 1, n, u, v);
            }
            cout << pos + neg << endl;            
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