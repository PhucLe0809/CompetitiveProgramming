#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
struct Query{
    int l, r, k, id;
};
struct SEG{
    vector <int> st;

    SEG (int n) : st(4*n) {};

    void build(int id, int l, int r){
        if (l == r){
            st[id] = 1;
            return;
        }
        int mid = l + r >> 1;
        build(2*id, l, mid);
        build(2*id+1, mid+1, r);
        st[id] = st[2*id] + st[2*id+1];
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
        st[id] = st[2*id] + st[2*id+1];
    }
    int get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return 0;
        if (u <= l && r <= v) return st[id];
        int mid = l + r >> 1;
        int a = get(2*id, l, mid, u, v);
        int b = get(2*id+1, mid+1, r, u, v);
        return (a + b);
    }
};
bool comp(Query &a, Query &b){
    return a.k < b.k;
}

void GOTOHANOI(){
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first;
        inp[i].second = i+1;
    }
    int m; cin >> m;
    vector <Query> query(m);
    for (int i = 0; i < m; i++){
        cin >> query[i].l >> query[i].r >> query[i].k;
        query[i].id = i;
    }

    sort(inp.begin(), inp.end());
    sort(query.begin(), query.end(), comp);
    vector <int> answer(m);
    int i = 0;
    SEG tree(n+5); tree.build(1, 1, n);
    for (auto &it:query){
        while (i < n && inp[i].first <= it.k){
            tree.update(1, 1, n, inp[i].second, 0);
            i++;
        }
        answer[it.id] = tree.get(1, 1, n, it.l, it.r);
    }

    for (auto &it:answer) cout << it << endl;
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