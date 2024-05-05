// #pragma GCC target ("avx2")
// #pragma GCC optimize ("03")
// #pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define inf LONG_MAX
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> st;

    SEG (int n) : st(4*n, LONG_MAX) {};

    void update(int id, int l, int r, int x, int val){
        if (x < l || x > r) return;
        if (l == r){
            st[id] = val;
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, x, val);
        update(2*id+1, mid+1, r, x, val);
        st[id] = min(st[2*id], st[2*id+1]);
    }
    void get(int id, int l, int r, int u, int v, int p, int &res){
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            if (l == r){
                if (st[id] <= p){
                    res++;
                    st[id] = LONG_MAX;
                }
                return;
            }
            if (l != r){
                if (st[id] > p) return;
            }
        }        
        int mid = l + r >> 1;
        get(2*id, l, mid, u, v, p, res);
        get(2*id+1, mid+1, r, u, v, p, res);
        st[id] = min(st[2*id], st[2*id+1]);
    }
};

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    SEG tree(n+5);
    while (m--){
        int t; cin >> t;
        if (t == 1){
            int x, h; cin >> x >> h; x++;
            tree.update(1, 1, n, x, h);
        }
        if (t == 2){
            int u, v, p; cin >> u >> v >> p; u++;
            int res = 0;
            tree.get(1, 1, n, u, v, p, res);
            cout << res << endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}