#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int str[maxarray], inp[maxarray];
int64_t st[4*maxarray], zero[4*maxarray], one[4*maxarray]; 
int lazy[4*maxarray];

void build(int id, int l, int r){
    if (l == r){
        st[id] = str[l]; 
        if (str[l] == 1){
            one[id] = inp[l]; zero[id] = 0;
        }else{
            one[id] = 0; zero[id] = inp[l];
        }
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    one[id] = one[2*id]^one[2*id+1];
    zero[id] = zero[2*id]^zero[2*id+1];
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    int old = st[id];
    st[id] = (st[id]+lazy[id]) % 2;
    if (old != st[id]) swap(one[id], zero[id]);
    if (l != r){
        lazy[2*id] += lazy[id];
        lazy[2*id+1] += lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] += 1;
        down(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, u, v);
    update(2*id+1, mid+1, r, u, v);
    one[id] = one[2*id]^one[2*id+1];
    zero[id] = zero[2*id]^zero[2*id+1];
}
int64_t get(int id, int l, int r, int u, int v, int x){
    down(id, l, r);
    if (v < l || u > r) return 0;
    if (u <= l && r <= v){
        if (x == 0) return zero[id];
        else return one[id];
    }
    int mid = l + r >> 1;
    int64_t a = get(2*id, l, mid, u, v, x);
    int64_t b = get(2*id+1, mid+1, r, u, v, x);
    return a^b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        char ch;
        for (int i = 1; i <= n; i++){
            cin >> ch; str[i] = ch-'0';
        }
        fill(lazy, lazy + maxarray, 0);
        build(1, 1, n);
        int q; cin >> q;
        int t, x, y;
        while (q--){
            cin >> t;
            if (t == 1){
                cin >> x >> y; 
                update(1, 1, n, x, y);
            }
            if (t == 2){
                cin >> x;
                cout << get(1, 1, n, 1, n, x) << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}