#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n, q, times = 0;
int64_t val[maxarray];
int tour[2*maxarray], start[maxarray], thend[maxarray];
int64_t f[2*maxarray], bit[2*maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    times++;
    tour[times] = u; start[u] = times;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    times++;
    tour[times] = u; thend[u] = times;
}
void preprocess(){
    for (int u = 1; u <= n; u++){
        f[start[u]] = val[u];
        f[thend[u]] = -val[u];
    }
    bit[0] = f[0] = 0;
    for (int i = 1; i <= times; i++){
        f[i] += f[i-1];
        bit[i] = f[i] - f[i - (i&(-i))];
    }
}
void update_point(int pos, int64_t x){
    while (pos <= times){
        bit[pos] += x;
        pos += (pos&(-pos));
    }
}
void update(int u, int64_t value){
    update_point(start[u], (value-val[u]));
    update_point(thend[u], -(value-val[u]));
    val[u] = value;
}
int64_t prefix(int pos){
    int64_t out = 0;
    while (pos > 0){
        out += bit[pos];
        pos -= (pos&(-pos));
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> val[i];
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    preprocess();
    int t;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> u >> v;
            update(u, v*1LL);
        }
        if (t == 2){
            cin >> u;
            cout << prefix(start[u]) << '\n';
        }
    }
    return 0;
}