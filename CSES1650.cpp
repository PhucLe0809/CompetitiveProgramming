#include <bits/stdc++.h>
#define maxarray 200005
#define inf 1000000007

using namespace std;
int inp[maxarray], st[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = inp[l];
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id]^st[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return 0;
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = l + r >> 1;
    int a = get(2*id, l, mid, u, v);
    int b = get(2*id+1, mid+1, r, u, v);
    return a^b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
    }
    build(1, 1, n);
    int l, r;
    while (q--){
        cin >> l >> r;
        cout << get(1, 1, n, l, r) << '\n';
    }
    return 0;
}