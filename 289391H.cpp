#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
struct Edge{
    int u, v, w, id;
};
vector <Edge> edges;
vector <bool> choose;
struct DSU{
    int cnt = 0, sum = 0;
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
    void union_set(int u, int v, int w, int id){
        int a = find_set(u);
        int b = find_set(v);
        if (a != b){
            if (big[a] < big[b]) swap(a, b);
            par[b] = a;
            big[a] += big[b];
            sum += w;
            cnt++; choose[id] = true;
        }
    }
};
bool comp(Edge &a, Edge &b){
    if (a.w == b.w) return a.id <= b.id;
    else return a.w <= b.w;
}

void find_mst(int n, int m){
    DSU tree(n+5); tree.init(n+5);
    int i = m-1;
    while (i >= 0 && tree.cnt < n-1){
        tree.union_set(edges[i].u, edges[i].v, edges[i].w, i);
        i--;
    }
}

void GOTOHANOI(){
    int n, m, s; cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        edges.push_back({u, v, w, i+1});
    }

    sort(edges.begin(), edges.end(), comp);
    choose.resize(m+1, false); find_mst(n, m);
    int sum = 0;
    vector <int> out;
    for (int i = 0; i < m; i++){
        if (choose[i]) continue;
        if (sum + edges[i].w > s) break;
        sum += edges[i].w;
        out.push_back(edges[i].id);
    }
    sort(out.begin(), out.end());
    cout << out.size() << endl;
    for (auto &it:out) cout << it << " ";
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