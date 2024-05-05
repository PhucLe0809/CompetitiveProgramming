#include <bits/stdc++.h>
#define maxarray 30005

using namespace std;
vector <multiset<int>> st(4*maxarray);

void update(int id, int l, int r, int p, int val){
    st[id].insert(val);
    if (l == r) return;
    int mid = l + r >> 1;
    if (p <= mid) update(2*id, l, mid, p, val);
    else update(2*id+1, mid+1, r, p, val);
}
int get(int id, int l, int r, int u, int v, int val){
    if (v < l || u > r) return 0;
    if (u <= l && r <= v){
        return st[id].count(val);
    }
    int mid = l + r >> 1;
    return get(2*id, l, mid, u, v, val)+get(2*id+1, mid+1, r, u, v, val);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int t, x, y, k;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> x >> k;
            update(1, 1, n, x, k);
        }
        if (t == 2){
            cin >> x >> y >> k;
            cout << get(1, 1, n, x, y, k) << '\n';
        }
    }
    return 0;
}