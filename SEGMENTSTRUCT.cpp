#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> inp(maxarray), st(4*maxarray);

void build(int id, int l, int r){
    if (l == r){
        st[id] = inp[id]; return ;
    }
    int mid = (l + r)/2;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = min(st[2*id], st[2*id + 1]);
}
void update(int id, int l, int r, int x, int val){
    if (x < l || x > r) return ;
    if (l == r){
        st[id] = val; return ;
    }
    int mid = (l + r)/2;
    update(2*id, l, mid, x, val);
    update(2*id+1, mid+1, r, x, val);
    st[id] = min(st[2*id], st[2*id+1]);
}
int get_min(int id, int l, int r, int u, int v){
    if (v < l || r < u) return INT_MAX;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r)/2;
    int get_left = get_min(2*id, l, mid, u, v);
    int get_right = get_min(2*id+1, mid+1, r, u, v);
    return min(st[2*id], st[2*id + 1]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int type, x, y; build(1, 1, n);
    while (q--){
        cin >> type >> x >> y;
        if (type == 1){
            update(1, 1, n, x, y);
        }
        if (type == 2){
            cout << get_min(1, 1, n, x, y) << '\n'; 
        }
    }
    return 0;
}