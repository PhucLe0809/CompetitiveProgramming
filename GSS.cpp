// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LONG_MAX
#define endl '\n'

using namespace std;
struct Node{
    int pre, suf, sum, maxsum;

    static Node base() { return {INT_MIN, INT_MIN, 0, INT_MIN}; }
    static Node merge(Node &a, Node &b){
        Node res;
        res.pre = max(a.pre, a.sum + b.pre);
        res.suf = max(b.suf, b.sum + a.suf);
        res.sum = a.sum + b.sum;
        res.maxsum = max({a.maxsum, b.maxsum, a.suf + b.pre});
        return res;
    }
};
struct SEG{
    vector <int> inp;
    vector <Node> st;

    SEG (int n) : inp(n), st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = {inp[l], inp[l], inp[l], inp[l]};
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    void update(int id, int l, int r, int x, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = {val, val, val, val};
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, x, val);
        update(2*id+1, mid+1, r, x, val);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    Node get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return Node::base();
        if (u <= l && r <= v) return st[id];
        int mid = (l + r) / 2;
        Node a = get(2*id, l, mid, u, v);
        Node b = get(2*id+1, mid+1, r, u, v);
        return Node::merge(a, b);
    }
};

void GOTOHANOI(){
    int n; cin >> n;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    int q; cin >> q;
    while (q--){
        int u, v; cin >> u >> v;
        cout << tree.get(1, 1, n, u, v).maxsum << endl;
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