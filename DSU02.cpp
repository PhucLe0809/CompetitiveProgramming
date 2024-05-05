#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;

struct DSU{
    vector <int> parent, big, dis;
    DSU(int n): parent(n), big(n), dis(n) {};

    void make_set(int v){
        parent[v] = v;
        big[v] = 1;
        dis[v] = 0;
    }
    pair<int, int> find_set(int v){
        if (v == parent[v]) return {v, 0};
        pair<int, int> val = find_set(parent[v]);
        parent[v] = val.first;
        dis[v] = (dis[v] + val.second) % 2;
        return {parent[v], dis[v]};
    }
    void union_set(int u, int v){
        pair<int, int> valu = find_set(u);
        pair<int, int> valv = find_set(v);
        u = valu.first; v = valv.first;
        if (u == v){
            if (valu.second != valv.second) cout << "YES\n";
            else cout << "NO\n";
        }else{
            if (big[u] < big[v]) swap(u, v);
            parent[v] = u;
            big[u] += big[v];
            dis[v] = (valu.second + valv.second + 1)%2;
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    DSU graph(n+5);
    for (int i = 1; i <= n; i++) graph.make_set(i);
    int x, y;
    while (q--){
        cin >> x >> y;
        graph.union_set(x, y);
    }
    return 0;
}