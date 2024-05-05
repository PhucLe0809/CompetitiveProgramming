#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int par[maxarray], big[maxarray], nxt[maxarray];

void make_set(int v){
    par[v] = v; big[v] = 1;
    nxt[v] = v+1;
}
int find_set(int v){
    return (v == par[v])?(v):(par[v] = find_set(par[v]));
}
void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if (u != v){
        if (big[u] < big[v]) swap(u, v);
        par[v] = u;
        big[u] += big[v];
    }
}
void union_interval(int l, int r){
    int u = l;
    while (u < r) {
        union_set(u, u+1);
        int tmp = nxt[u];
        nxt[u] = max(nxt[u], r);
        u = tmp;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int t, l, r, u, v;
    for (int i = 0; i <= n; i++) make_set(i);
    while (m--){
        cin >> t;
        if (t == 1){
            cin >> u >> v;
            union_set(u, v);
        }
        if (t == 2){
            cin >> l >> r;
            union_interval(l, r);
        }
        if (t == 3){
            cin >> u >> v;
            u = find_set(u);
            v = find_set(v);
            if (u == v) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}