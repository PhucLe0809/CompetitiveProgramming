#include <bits/stdc++.h>
#define maxarray 500005

using namespace std;
int n, times = 0;
int start[maxarray], thend[maxarray];
int st[4*maxarray] = {0}, lazy[4*maxarray] = {0};
vector <int> graph[maxarray];

void dfs(int u, int pre){
    times++;
    start[u] = times;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    thend[u] = times;
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    st[id] = r-l+1;
    if (l != r){
        lazy[2*id] = lazy[id];
        lazy[2*id+1] = lazy[id];
    }
    lazy[id] = 0;
}
void update_range(int id, int l, int r, int u, int v, int x){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] = x;
        down(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update_range(2*id, l, mid, u, v, x);
    update_range(2*id+1, mid+1, r, u, v, x);
    st[id] = st[2*id] + st[2*id+1];
}
void update_point(int id, int l, int r, int u, int v, int x){
    down(id, l, r);
    if (v < l || u > r) return;
    if (l == r){
        st[id] = x;
        return;
    }
    int mid = l + r >> 1;
    update_point(2*id, l, mid, u, v, x);
    update_point(2*id+1, mid+1, r, u, v, x);
    st[id] = st[2*id] + st[2*id+1];
}
bool get(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 1;
    if (u <= l && r <= v){
        return (r-l+1 == st[id]);
    }
    int mid = l + r >> 1;
    bool a = get(2*id, l, mid, u, v);
    bool b = get(2*id+1, mid+1, r, u, v);
    return (a&b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    int q; cin >> q;
    int t;
    while (q--){
        cin >> t >> u;
        if (t == 1){
            update_range(1, 1, n, start[u], thend[u], 1);
        }
        if (t == 2){
            update_point(1, 1, n, start[u], start[u], 0);
        }
        if (t == 3){
            cout << get(1, 1, n, start[u], thend[u]) << '\n';
        }
    }
    return 0;
}