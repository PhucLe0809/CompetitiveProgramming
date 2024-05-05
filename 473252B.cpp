#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
struct DSU{
    vector <int> par, big;
    DSU (int n) : par(n), big(n) {};

    void make_set(int v){
        par[v] = v;
        big[v] = 1;
    }
    int find_set(int v){
        return (v == par[v])?(v):(par[v] = find_set(par[v]));
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, m; cin >> n >> m;
    vector <pair<int, int>> inp(m);
    for (int i = 0; i < m; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    DSU tree(n+5);
    for (int i = 0; i < n+5; i++) tree.make_set(i);
    vector <int64_t> answer(m);
    int u, v;
    int64_t res, com; res = 0;
    for (int i = m-1; i >= 0; i--){
        answer[i] = n*(n-1)/2 - res;
        u = tree.find_set(inp[i].first);
        v = tree.find_set(inp[i].second);
        if (u != v){
            if (tree.big[u] < tree.big[v]) swap(u, v);
            com = tree.big[v];
            res -= com*(com - 1)/2;
            com = tree.big[u];
            res -= com*(com - 1)/2;
            tree.par[v] = tree.par[u];
            tree.big[u] += tree.big[v];
            com = tree.big[u];
            res += com*(com - 1)/2;
        }
    }
    for (auto &it:answer) cout << it << '\n';
    return 0;
}