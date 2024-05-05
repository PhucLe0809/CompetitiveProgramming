// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct Node{
    int pre, suf, sum, maxsum;

    static Node base() { return {INT_MIN, INT_MIN, 0, INT_MIN}; };
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
    vector <Node> st;
    vector <int> lazy;

    SEG (int n) : st(4*n), lazy(4*n, inf) {};
    
    void build(int id, int l, int r){
        if (l == r){
            st[id] = {0, 0, 0, 0};
            return;
        }
        int mid = (l + r) / 2;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    void down(int id, int l, int r){
        if (lazy[id] == inf) return;        
        int temp = (r-l+1) * lazy[id];
        st[id].pre = st[id].suf = max(temp, 0LL);
        st[id].sum = temp;
        st[id].maxsum = max(temp, 0LL);
        if (l != r){
            lazy[2*id] = lazy[id];
            lazy[2*id+1] = lazy[id];
        }
        lazy[id] = inf;
    }
    void update(int id, int l, int r, int u, int v, int val){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            lazy[id] = val;
            down(id, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(2*id, l, mid, u, v, val);
        update(2*id+1, mid+1, r, u, v, val);
        st[id] = Node::merge(st[2*id], st[2*id+1]);
    }
    Node get(int id, int l, int r, int u, int v){
        down(id, l, r);
        if (v < l || u > r) return Node::base();
        if (u <= l && r <= v) return st[id];
        int mid = (l + r) / 2;
        Node a = get(2*id, l, mid, u, v);
        Node b = get(2*id+1, mid+1, r, u, v);
        return Node::merge(a, b);
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    SEG tree(n+5); tree.build(1, 1, n);
    while (q--){
        int u, v, val; cin >> u >> v >> val; u++;
        tree.update(1, 1, n, u, v, val);
        cout << tree.get(1, 1, n, 1, n).maxsum << endl;
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