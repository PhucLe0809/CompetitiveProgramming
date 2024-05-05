#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct SEG{
    vector <int> st, lazy;

    SEG (int n) : st(4*n), lazy(4*n, -1) {};

    void down(int id, int l, int r){
        if (lazy[id] == -1) return;
        st[id] = (r - l + 1) * lazy[id];
        if (l != r){
            lazy[2*id] = lazy[id];
            lazy[2*id+1] = lazy[id];
        }
        lazy[id] = -1;
    }
    void update(int id, int l, int r, int u, int v, int val){
        down(id, l, r);
        if (v < l || u > r) return;
        if (u <= l && r <= v){
            lazy[id] = val;
            down(id, l, r);
            return;
        }
        int mid = l + r >> 1;
        update(2*id, l, mid, u, v, val);
        update(2*id+1, mid+1, r, u, v, val);
        st[id] = st[2*id] + st[2*id+1];
    }
    int get(int id, int l, int r, int u, int v){
        down(id, l, r);
        if (v < l || u > r) return 0;
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return a + b;
    }
};

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    string str; cin >> str;

    vector <SEG> tree(26, SEG(n+5));
    for (int i = 0; i < n; i++){
        tree[str[i] - 'a'].update(1, 1, n, i+1, i+1, 1);
    }

    vector <int> fre(26);
    while (q--){
        int u, v, k; cin >> u >> v >> k;

        fill(fre.begin(), fre.end(), 0);
        for (int i = 0; i < 26; i++){
            fre[i] = tree[i].get(1, 1, n, u, v);
            tree[i].update(1, 1, n, u, v, 0);
        }

        if (k == 1){
            int pre = 0;
            for (int i = 0; i < 26; i++){
                if (fre[i] == 0) continue;
                tree[i].update(1, 1, n, u + pre, u + pre+fre[i] - 1, 1);
                pre += fre[i];
            }
        }
        if (k == 0){
            int suf = 0;
            for (int i = 25; i >= 0; i--){
                if (fre[i] == 0) continue;
                tree[i].update(1, 1, n, u + suf, u + suf+fre[i] - 1, 1);
                suf += fre[i];
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 26; j++){
            if (tree[j].get(1, 1, n, i, i)){
                cout << (char)(j + 'a');
                break;
            }
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