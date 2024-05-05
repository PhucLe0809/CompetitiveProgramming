#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> st(4*maxarray), lazy(4*maxarray);

void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] = (r-l+1) - st[id];
    if (l != r){
        lazy[2*id] = 1 - lazy[2*id];
        lazy[2*id+1] = 1 - lazy[2*id+1];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] = 1;
        down(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, u, v);
    update(2*id+1, mid+1, r, u, v);
    st[id] = st[2*id] + st[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return get(2*id, l, mid, u, v)+get(2*id+1, mid+1, r, u, v);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int t, x, y;
    while (m--){
        cin >> t >> x >> y;
        if (t == 0) update(1, 1, n, x, y);
        if (t == 1) cout << get(1, 1, n, x, y) << '\n';
    }
    return 0;
}