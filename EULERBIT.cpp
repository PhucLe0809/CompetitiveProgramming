#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m, root, times = 0;
int val[maxarray] = {0}; int64_t bit[maxarray] = {0};
int tour[maxarray], start[maxarray], thend[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    times++;
    tour[times] = u; start[u] = times;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    thend[u] = times;
}
void add_point(int pos, int value){
    while (pos <= n){
        bit[pos] += value*1LL;
        pos += (pos&(-pos));
    }
}
void update(int u, int value){
    add_point(start[u], value);
}
int64_t prefix(int pos){
    int64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}
int64_t sum_subtree(int u){
    return prefix(thend[u]) - prefix(start[u]-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    root = 1; dfs(root, root);
    int q; cin >> q;
    int t;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> u >> v;
            update(u, v);
        }
        if (t == 2){
            cout << sum_subtree(u) << '\n';
        }
    }
    return 0;
}