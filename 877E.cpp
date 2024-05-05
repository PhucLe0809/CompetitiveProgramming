#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n, times = 0;
int val[maxarray];
int start[maxarray], thend[maxarray];
int f[maxarray], st[4*maxarray], cnt[4*maxarray], lazy[4*maxarray];
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
void build(int id, int l, int r){
    if (l == r){
        st[id] = f[l];
        cnt[id] = 0;
        return;
    }
    int mid = l + r >> 1;
    build(2*id, l, mid);
    build(2*id+1, mid+1, r);
    st[id] = st[2*id] + st[2*id+1];
    cnt[id] = cnt[2*id] + cnt[2*id+1];
}
void preprocess(){
    for (int u = 1; u <= n; u++){
        f[start[u]] = val[u];
    }
    build(1, 1, times);
}
void down(int id, int l, int r){
    if (lazy[id] == 0) return;
    cnt[id] += lazy[id];
    if (lazy[id]%2 != 0) st[id] = (r-l+1) - st[id];
    if (l != r){
        lazy[2*id] += lazy[id];
        lazy[2*id+1] += lazy[id];
    }
    lazy[id] = 0;
}
void update(int id, int l, int r, int u, int v, int val){
    down(id, l, r);
    if (v < l || u > r) return;
    if (u <= l && r <= v){
        lazy[id] += val;
        down(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2*id, l, mid, u, v, val);
    update(2*id+1, mid+1, r, u, v, val);
    st[id] = st[2*id] + st[2*id+1];
}
int query(int id, int l, int r, int u, int v){
    down(id, l, r);
    if (v < l || u > r) return 0;
    if (u <= l && r <= v){
        return st[id];
        // if (cnt[id]%2 == 0) return st[id];
        // else return (r-l+1) - st[id];
    }
    int mid = l + r >> 1;
    int a = query(2*id, l, mid, u, v);
    int b = query(2*id+1, mid+1, r, u, v);
    return a+b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int x;
    for (int y = 2; y <= n; y++){
        cin >> x;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) cin >> val[i];
    dfs(1, 0);
    preprocess();
    int q; cin >> q;
    string str; int u;
    while (q--){
        cin >> str >> u;
        if (str == "get"){
            cout << query(1, 1, times, start[u], thend[u]) << '\n';
        }
        if (str == "pow"){
            update(1, 1, times, start[u], thend[u], 1);
        }
    }
    return 0;
}