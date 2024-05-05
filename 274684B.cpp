// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int r, n, m;
struct Matrix{
    int a, b, c, d;

    static Matrix base() { return {1, 0, 0, 1}; }
    static Matrix multi(Matrix &one, Matrix &two){
        Matrix res;
        res.a = (one.a*two.a + one.b*two.c) % r;
        res.b = (one.a*two.b + one.b*two.d) % r;
        res.c = (one.c*two.a + one.d*two.c) % r;
        res.d = (one.c*two.b + one.d*two.d) % r;
        return res;
    }
};
struct SEG{
    vector <Matrix> inp, st;

    SEG (int n) : inp(n), st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = inp[l];
            return;
        }
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = Matrix::multi(st[2*id], st[2*id+1]);
    }
    Matrix get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return Matrix::base();
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        Matrix a = get(2*id, l, mid, u, v);
        Matrix b = get(2*id+1, mid+1, r, u, v);
        return Matrix::multi(a, b);
    }
};

void GOTOHANOI(){
    cin >> r >> n >> m;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        tree.inp[i] = {a % r, b % r, c % r, d % r};
    }
    tree.build(1, 1, n);
    while (m--){
        int u, v; cin >> u >> v;
        Matrix matrix = tree.get(1, 1, n, u, v);
        cout << matrix.a << " " << matrix.b << endl;
        cout << matrix.c << " " << matrix.d << endl;
        cout << endl;
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