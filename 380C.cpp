#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct Node{
    int opt, open, close;

    static Node base() { return {0, 0, 0}; }
    static Node create(int opt, int open, int close){ 
        return {opt, open, close};
    }
    static Node merge(Node &a, Node &b){
        Node res;
        int temp = min(a.open, b.close);
        res.opt = a.opt + b.opt + 2*temp;
        res.open = a.open + b.open - temp;
        res.close = a.close + b.close - temp;
        return res;
    }
};
struct SEG{
    string str;
    vector <Node> st;

    SEG (int n) : st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            if (str[l-1] == '(') st[id] = Node::create(0, 1, 0);
            else st[id] = Node::create(0, 0, 1);
            return;
        }
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
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
    string str; cin >> str;
    int n = str.size();
    SEG tree(n+5);
    tree.str = str; tree.build(1, 1, n);

    int q; cin >> q;
    while (q--){
        int u, v; cin >> u >> v;
        cout << tree.get(1, 1, n, u, v).opt << endl;
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