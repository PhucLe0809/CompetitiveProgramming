#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int inp[maxarray];
int st[4*maxarray];

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
void update(int id, int l, int r, int pos, int val){
    if (pos < l || pos > r) return;
    if (l == r){
        st[id] = val;
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, pos, val);
    update(2*id+1, mid+1, r, pos, val);
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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    build(1, 1, n);
    while (q--){
        int type, a, b; cin >> type >> a >> b;
        if (type == 1) update(1, 1, n, a, b);
        if (type == 2) cout << get(1, 1, n, a, b) << " ";
    }
    return 0;
}