#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <pair<int, pair<int, int>>> edges;
struct DSU{
    int cnt = 0;
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
            cnt++;
        }
    }
};
int find_mst(int n, int m, int id){
    DSU tree(n+5); tree.init(n+5);
    int i = id;
    while (i < m && tree.cnt < n-1){
        int u = edges[i].second.first;
        int v = edges[i].second.second;
        int w = edges[i].first;
        tree.union_set(u, v);
        i++;
    }
    if (tree.cnt < n-1) return LONG_MAX;
    else return edges[i-1].first - edges[id].first;
}

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        edges.push_back({w, {u, v}});
    }

    sort(edges.begin(), edges.end());
    int answer = LONG_MAX;
    for (int i = 0; i <= m-n+1; i++){
        answer = min(answer, find_mst(n, m, i));
    }
    if (answer == LONG_MAX) cout << "NO\n";
    else{
        cout << "YES\n";
        cout << answer << endl;
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