#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
int inp[maxarray];
int st[4*maxarray], lazy[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = inp[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id] + st[2*id+1];
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] += lazy[id] * (r - l + 1);
    if (l != r){
        lazy[2*id] += lazy[id];
        lazy[2*id+1] += lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v, int val){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] += val;
        down(id, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(2*id, l, mid, u, v, val);
    update(2*id+1, mid+1, r, u, v, val);
    st[id] = st[2*id] + st[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    int a = get(2*id, l, mid, u, v);
    int b = get(2*id+1, mid+1, r, u, v);
    return a + b;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    build(1, 1, n);
    while (q--){
        int t; cin >> t;
        if (t == 1){
            int l, r, x; cin >> l >> r >> x;
            update(1, 1, n, l, r, x);
            continue;
        }
        if (t == 2){
            int l, r; cin >> l >> r;
            cout << get(1, 1, n, l, r) << endl;
            continue;
        }
    }
    return 0;
}