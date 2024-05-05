#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int h[maxarray], up[maxarray][18];
int minn[maxarray][18], maxx[maxarray][18];
vector <pair<int, int>> inp[maxarray];

void dfs(int u){
    for (auto &it:inp[u]){
        int v = it.first, w = it.second;
        if (v == up[u][0]) continue;
        h[v] = h[u]+1; up[v][0] = u;
        minn[v][0] = w; maxx[v][0] = w;
        for (int j = 1; j < 18; j++){
            up[v][j] = up[up[v][j-1]][j-1];
            minn[v][j] = min(minn[v][j-1], minn[up[v][j-1]][j-1]);
            maxx[v][j] = max(maxx[v][j-1], maxx[up[v][j-1]][j-1]);
        }
        dfs(v);
    }
}
pair <int, int> diam(int u, int v){
    int a, b; a = INT_MAX; b = INT_MIN;
    if (h[u] != h[v]){
        if (h[u] < h[v]) swap(u, v);
        int k = h[u] - h[v];
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1){
                a = min(a, minn[u][j]); b = max(b, maxx[u][j]);
                u = up[u][j];
            }
        }
    }
    if (u == v) return {a, b};
    int k = __lg(h[u]);
    int c, d; c = INT_MAX; d = INT_MIN;
    for (int j = k; j >= 0; j--){
        if (up[u][j] != up[v][j]){
            a = min(a, minn[u][j]); b = max(b, maxx[u][j]);
            c = min(c, minn[v][j]); d = max(d, maxx[v][j]);
            u = up[u][j]; v = up[v][j];
        }
    }
    return {min({a, c, minn[u][0], minn[v][0]}), max({b, d, maxx[u][0], maxx[v][0]})};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v, w;
    for (int i = 1; i < n; i++){
        cin >> u >> v >> w;
        inp[u].push_back({v, w});
        inp[v].push_back({u, w});
    }
    dfs(1);
    int k; cin >> k;
    while (k--){
        cin >> u >> v;
        cout << diam(u, v).first << " " << diam(u, v).second << '\n';
    }
    return 0;
}