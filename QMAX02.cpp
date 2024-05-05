#include <bits/stdc++.h>
#define maxarray 50005

using namespace std;
vector <int> st(4*maxarray), lazy(4*maxarray);

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
    st[id] = max(st[2*id], st[2*id+1]);
}
int get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return INT_MIN;
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    return max(get(2*id, l, mid, u, v), get(2*id+1, mid+1, r, u, v));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int t, x, y, k;
    while(q--){
        cin >> t >> x >> y;
        if (t == 0){
            cin >> k;
            update(1, 1, n, x, y, k);
        }
        if (t == 1){
            cout << get(1, 1, n, x, y) << '\n';
        }
    }
    return 0;
}