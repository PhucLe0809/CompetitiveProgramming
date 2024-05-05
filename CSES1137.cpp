#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int cnt = 0;
int inp[maxarray], start[maxarray], thend[maxarray];
int64_t st[4*maxarray], scan[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    scan[++cnt] = u;
    start[u] = cnt;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    thend[u] = cnt;
}
void build(int id, int l, int r){
    if (l == r){
        st[id] = inp[scan[l]];
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id] + st[2*id+1];
}
void update(int id, int l, int r, int pos, int value){
    if (pos < l || pos > r) return;
    if (l == r){
        st[id] = value;
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, pos, value);
    update(2*id+1, mid+1, r, pos, value);
    st[id] = st[2*id] + st[2*id+1];
}
int64_t get(int id, int l, int r, int u, int v){
    if (v < l || u > r) return 0;
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = l + r >> 1;
    int64_t a = get(2*id, l, mid, u, v);
    int64_t b = get(2*id+1, mid+1, r, u, v);
    return a+b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0); build(1, 1, n);
    // for (int i = 1; i <= n; i++) cout << scan[i] << " "; cout << endl;
    int t;
    while (q--){
        cin >> t;
        if (t == 1){
            cin >> u >> v;
            update(1, 1, n, start[u], v);
        }
        if (t == 2){
            cin >> u;
            cout << get(1, 1, n, start[u], thend[u]) << '\n';
        }
    }
    return 0;
}