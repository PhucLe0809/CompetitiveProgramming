#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int64_t st[4*maxarray], lazy[4*maxarray];

void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] += lazy[id];
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
    int mid = l + r >> 1;
    update(2*id, l, mid, u, v, val);
    update(2*id+1, mid+1, r, u, v, val);
}
int64_t get(int id, int l, int r, int x){
    down(id, l, r);
    if (x < l || x > r) return 0;
    if (l == r) return st[id];
    int mid = l + r >> 1;
    int a = get(2*id, l, mid, x);
    int b = get(2*id+1, mid+1, r, x);
    return max(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int t, l, r, v;
    memset(st, 0, sizeof(st));
    memset(lazy, 0, sizeof(lazy));
    while (m--){
        cin >> t;
        if (t == 1){
            cin >> l >> r >> v;
            update(1, 1, n, ++l, r, v);
        }
        if (t == 2){
            cin >> v;
            cout << get(1, 1, n, ++v) << '\n';
        }
    }
    return 0;
}