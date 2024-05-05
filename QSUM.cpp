#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
int inp[maxarray];
int tree[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        tree[id] = inp[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    tree[id] = tree[2*id] + tree[2*id+1];
}
void update(int id, int l, int r, int pos, int val){
    if (pos < l || pos > r) return;
    if (pos == l && pos == r){
        tree[id] += val; return;
    }
    int mid = (l + r) / 2;
    update(2*id, l, mid, pos, val);
    update(2*id+1, mid+1, r, pos, val);
    tree[id] = tree[2*id] + tree[2*id+1];
}
int get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return 0;
    if (u <= l && r <= v) return tree[id];
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
        int t, a, b; cin >> t >> a >> b;
        if (t == 1){
            update(1, 1, n, a, b);
            continue;
        }
        if (t == 2){
            cout << get(1, 1, n, a, b) << " ";
            continue;
        }
    }
    return 0;
}