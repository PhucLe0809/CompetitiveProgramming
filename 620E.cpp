#include <bits/stdc++.h>
#define maxarray 400005

using namespace std;
int n, m, times = 0;
int tour[maxarray], start[maxarray], thend[maxarray];
vector <int> graph[maxarray];
int64_t st[4*maxarray], lazy[4*maxarray], color[maxarray];

void dfs(int u, int pre){
    times++;
    tour[times] = u; start[u] = times;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    thend[u] = times;
}
void build(int id, int l, int r){
    if (l == r){
        st[id] = int64_t(pow(2, color[tour[l]]));
        lazy[id] = 0;
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id] | st[2*id+1];
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] = int64_t(pow(2, lazy[id]));
    if (l != r){
        lazy[2*id] = lazy[id];
        lazy[2*id+1] = lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v, int x){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] = x*1LL;
        down(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, u, v, x);
    update(2*id+1, mid+1, r, u, v, x);
    st[id] = st[2*id] | st[2*id+1];
}
int64_t get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 0LL;
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = l + r >> 1;
    int64_t a = get(2*id, l, mid, u, v);
    int64_t b = get(2*id+1, mid+1, r, u, v);
    return a|b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> color[i];
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    build(1, 1, n);
    int t;
    for (int i = 0; i < m; i++){
        cin >> t;
        if (t == 1){
            cin >> u >> v;
            update(1, 1, n, start[u], thend[u], v);
        }
        if (t == 2){
            cin >> u;
            int64_t x = get(1, 1, n, start[u], thend[u]);
            int cnt = 0;
            while (x!=0){
                cnt += (x%2 != 0); x /= 2;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}