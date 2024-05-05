#include <bits/stdc++.h>

using namespace std;
struct LCA{
    vector <int> par, h;
    vector <vector<int>> up, dis;
    vector <vector<pair<int, int>>> inp;
    LCA (int n) : par(n), h(n), up(n, vector <int> (20)), dis(n, vector <int> (20)), inp(n) {};

    void dfs(int u){
        for (auto &v:inp[u]){
            if (v.first == par[u]) continue;
            par[v.first] = u; h[v.first] = h[u]+1;
            dis[v.first][0] = v.second;
            dfs(v.first);
        }
    }
    void preprocess(int n){
        par[1] = 1; dfs(1);
        for (int u = 1; u <= n; u++) up[u][0] = par[u];
        for (int j = 1; j < 20; j++){
            for (int u = 1; u <= n; u++){
                up[u][j] = up[up[u][j-1]][j-1];
                dis[u][j] = dis[u][j-1] + dis[up[u][j-1]][j-1];
            }
        }
    }
    int ancestor_kth(int u, int k){
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1) u = up[u][j];
        }
        return u;
    }
    int calc_dis(int u, int k){
        int sum = 0;
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1){
                sum += dis[u][j]; u = up[u][j];
            }
        }
        return sum;
    }
    int solve01(int u, int x){
        int l = 0, r = h[u], m, answer;
        while (l <= r){
            m = l + r >> 1;
            if (calc_dis(u, m) <= x){
                answer = m; l = m + 1;
            }else r = m - 1;
        }
        return ancestor_kth(u, answer);
    }
    int solve02(int u, int x){
        int now, k; now = k = 0;
        for (int j = __lg(h[u]); j >= 0; j--){
            if ((1 << j) <= h[u] && now+dis[u][j] <= x){
                now += dis[u][j]; u = up[u][j];
                k |= (1 << j);
            }
        }
        return u;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    LCA tree(n+5);
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        tree.inp[u].push_back({v, w});
        tree.inp[v].push_back({u, w});
    }
    tree.preprocess(n);
    int q; cin >> q;
    int x;
    while (q--){
        cin >> u >> x;
        cout << tree.solve02(u, x) << '\n';
    }
    return 0;
}