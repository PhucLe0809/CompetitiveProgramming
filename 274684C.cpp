// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct Node{
    int cnt = 0;
    int fre[45] = {0};

    static Node base(){
        Node res; return res;
    }
    static Node merge(Node &a, Node &b){
        Node res = a;
        res.cnt = a.cnt + b.cnt;
        vector <int> suffix(45);
        suffix[40] = a.fre[40];
        for (int i = 39; i >= 1; i--) suffix[i] = suffix[i+1] + a.fre[i];
        for (int i = 1; i <= 40; i++){
            if (b.fre[i] == 0) continue;
            res.fre[i] += b.fre[i];
            res.cnt += suffix[i+1] * b.fre[i];
        }
        return res;
    }
};
struct SEG{
    vector <int> inp;
    vector <Node> st;

    SEG (int n) : inp(n), st(4*n) {};
    
    void build(int id, int l, int r){
        if (l == r){
            st[id].fre[inp[l]] = 1;
            return;
        }
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    void update(int id, int l, int r, int x, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id].fre[inp[x]] = 0;
            inp[x] = val;
            st[id].fre[inp[x]] = 1;
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, x, val);
        update(2*id+1, mid+1, r, x, val);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    Node get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return Node::base();
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        Node a = get(2*id, l, mid, u, v);
        Node b = get(2*id+1, mid+1, r, u, v);
        return Node::merge(a, b);
    }
};

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    SEG tree(n+5);
    for (int i = 1; i <= n; i++) cin >> tree.inp[i];
    tree.build(1, 1, n);
    while (m--){
        int t, u, v; cin >> t >> u >> v;
        if (t == 1){
            cout << tree.get(1, 1, n, u, v).cnt << endl;
        }
        if (t == 2){
            tree.update(1, 1, n, u, v);
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