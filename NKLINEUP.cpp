#include <bits/stdc++.h>
#define maxarray 50005

using namespace std;
vector <int> inp(maxarray);
vector <pair<int, int>> st(4*maxarray);

void build(int id, int l, int r){
    if (l == r){
        st[id].first = inp[l];
        st[id].second = inp[l];
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id].first = max(st[2*id].first, st[2*id+1].first);
    st[id].second = min(st[2*id].second, st[2*id+1].second);
}
pair<int, int> get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return {INT_MIN, INT_MAX};
    if (u <= l && r <= v) return st[id];
    int mid = l + r >> 1;
    auto a = get(2*id, l, mid, u, v);
    auto b = get(2*id+1, mid+1, r, u, v);
    return {max(a.first, b.first), min(a.second, b.second)};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    build(1, 1, n);
    int x, y;
    while (q--){
        cin >> x >> y;
        auto it = get(1, 1, n, x, y);
        cout << it.first-it.second << '\n';
    }
    return 0;
}