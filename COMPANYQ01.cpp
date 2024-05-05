#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int h[maxarray], up[maxarray][19];
vector <int> graph[maxarray];

void dfs(int u){
    for (auto &v:graph[u]){
        h[v] = h[u] + 1; up[v][0] = u;
        for (int j = 1; j < 19; j++) up[v][j] = up[up[v][j-1]][j-1];
        dfs(v);
    }
}
int ancestor_kth(int u, int k){
    if (k > h[u]) return -1;
    for (int j = __lg(k); j >= 0; j--){
        if ((k >> j) & 1) u = up[u][j];
    }
    return u;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int u;
    for (int v = 2; v <= n; v++){
        cin >> u;
        graph[u].push_back(v);
    }
    h[1] = 0; up[1][0] = 1; dfs(1);
    int k;
    while (q--){
        cin >> u >> k;
        cout << ancestor_kth(u, k) << '\n';
    }
    return 0;
}