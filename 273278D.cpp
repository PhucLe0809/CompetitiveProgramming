#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> inp(maxarray), st(4*maxarray);

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
void update(int id, int l, int r, int x, int val){
    if (x < l || x > r) return;
    if (l == r){
        st[id] = val;
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, x, val);
    update(2*id+1, mid+1, r, x, val);
    st[id] = max(st[2*id], st[2*id+1]);
}
int get(int id, int l, int r, int k, int down){
    if (st[id] < k) return -1;
    if (r < down) return -1;
    if (l == r) return l-1;
    int mid = l + r >> 1;
    int res = -1;
    if (st[2*id] >= k) res = get(2*id, l, mid, k, down);
    if (res == -1) res = get(2*id+1, mid+1, r, k, down);
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    build(1, 1, n);
    int t, x, y;
    while (q--){
        cin >> t >> x >> y;
        if (t == 1){
            update(1, 1, n, x+1, y);
        }
        if (t == 2){
            cout << get(1, 1, n, x, y+1) << '\n';
        }
    }
    return 0;
}