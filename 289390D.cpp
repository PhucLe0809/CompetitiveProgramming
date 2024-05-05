#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct DSU{
    vector <int> par, big;

    DSU (int n) : par(n), big(n) {};

    void init(int n){
        for (int v = 0; v < n; v++){
            par[v] = v;
            big[v] = 1;
        }
    }
    int find_set(int v){
        return (v == par[v]) ? (v):(par[v] = find_set(par[v]));
    }
    void union_set(int u, int v){
        int a = find_set(u);
        int b = find_set(v);
        if (a != b){
            if (big[a] < big[b]) swap(a, b);
            par[b] = a;
            big[a] += big[b];
        }
    }
};

void GOTOHANOI(){
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
    }
    vector <pair<bool, pair<int, int>>> que;
    for (int i = 0; i < k; i++){
        string type; cin >> type;
        int u, v; cin >> u >> v;
        que.push_back({type == "cut", {u, v}});
    }
    DSU tree(n+5);
    tree.init(n+5);
    stack <bool> sta;
    for (int i = k-1; i >= 0; i--){
        int u = que[i].second.first;
        int v = que[i].second.second;
        if (que[i].first){
            tree.union_set(u, v);
        }else{
            sta.push(tree.find_set(u) == tree.find_set(v));
        }
    }
    while (!sta.empty()){
        if (sta.top()) cout << "YES\n"; else cout << "NO\n";
        sta.pop();
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