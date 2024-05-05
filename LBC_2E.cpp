#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 200005

using namespace std;
int inp[maxarray];
pair<int, int> st[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = {inp[l], inp[l]};
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = {max(st[2*id].first, st[2*id+1].first), min(st[2*id].second, st[2*id+1].second)};
}
void update(int id, int l, int r, int pos, int val){
    if (pos < l || pos > r) return;
    if (l == r){
        st[id] = {val, val};
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, pos, val);
    update(2*id+1, mid+1, r, pos, val);
    st[id] = {max(st[2*id].first, st[2*id+1].first), min(st[2*id].second, st[2*id+1].second)};
}
pair<int, int> get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return {LONG_MIN, LONG_MAX};
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    auto a = get(2*id, l, mid, u, v);
    auto b = get(2*id+1, mid+1, r, u, v);
    return {max(a.first, b.first), min(a.second, b.second)};
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    build(1, 1, n);
    while (q--){
        int t, a, b; cin >> t >> a >> b;
        if (t == 1){
            update(1, 1, n, a, b);
            continue;
        }
        if (t == 2){
            auto it = get(1, 1, n, a, b);
            cout << it.first - it.second << endl;
            continue;
        }
    }
    return 0;
}