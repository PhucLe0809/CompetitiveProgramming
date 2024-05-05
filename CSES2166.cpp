#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int inp[maxarray];
struct Node{
    int64_t sum, pre, suf, maxsum;

    static Node base() { return {0, 0, 0, 0}; }
    static Node val(int value) { return {value, value, value, value}; }
    static Node merge(const Node &a, const Node &b){
        Node res;
        res.pre = max(a.pre, a.sum + b.pre);
        res.suf = max(b.suf, b.sum + a.suf);
        res.sum = a.sum + b.sum;
        res.maxsum = max({a.maxsum, b.maxsum, a.suf + b.pre});
        return res;
    }
} st[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = Node::val(inp[l]);
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = Node::merge(st[2*id], st[2*id+1]);
}
void update(int id, int l, int r, int pos, int value){
    if (pos < l || pos > r) return;
    if (l == r){
        st[id] = Node::val(value);
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, pos, value);
    update(2*id+1, mid+1, r, pos, value);
    st[id] = Node::merge(st[2*id], st[2*id+1]);
}
Node get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return Node::base();
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = l + r >> 1;
    Node a = get(2*id, l, mid, u, v);
    Node b = get(2*id+1, mid+1, r, u, v);
    return Node::merge(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
    }
    build(1, 1, n);
    int t, l, r;
    while (q--){
        cin >> t >> l >> r;
        if (t == 1){
            update(1, 1, n, l, r);
        }
        if (t == 2){
            cout << max(get(1, 1, n, l, r).pre, int64_t(0)) << '\n';
        }
    }
    return 0;
}