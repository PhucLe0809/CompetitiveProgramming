#include <bits/stdc++.h>
#define maxarray 200005
 
using namespace std;
int n, q;
int val[maxarray];
int maxx[maxarray][20], up[maxarray][20], h[maxarray];
vector <int> graph[maxarray];
 
void dfs(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        h[v] = h[u]+1; 
        up[v][0] = u; maxx[v][0] = val[u];
        for (int j = 1; j < 20; j++){
            up[v][j] = up[up[v][j-1]][j-1];
            maxx[v][j] = max(maxx[v][j-1], maxx[up[v][j-1]][j-1]);
        }
        dfs(v, u);
    }
}
void dfs_update(int u, int pre){
    for (auto &v:graph[u]){
        if (v == up[u][0]) continue;
        maxx[v][0] = val[u];
        for (int j = 1; j < 20; j++){
            maxx[v][j] = max(maxx[v][j-1], maxx[up[v][j-1]][j-1]);
        }
        dfs_update(v, pre);
    }
}
void update(int u, int value){
    val[u] = value;
    dfs_update(u, 0);
}
int lca(int u, int v){
    int a = val[u], b = val[v];
    if (h[u] != h[v]){
        if (h[u] < h[v]){
            swap(u, v); swap(a, b);
        }
        int k = h[u] - h[v];
        for (int j = 0; (1 << j) <= k; j++){
            if ((k >> j) & 1){
                a = max(a, maxx[u][j]);
                u = up[u][j];
            }
        }
    }
    if (u == v) return max(a, b);
    int k = __lg(h[u]);
    for (int j = k; j >= 0; j--){
        if (up[u][j] != up[v][j]){
            a = max(a, maxx[u][j]); b = max(b, maxx[v][j]);
            u = up[u][j]; v = up[v][j];
        }
    }
    return max({a, b, maxx[u][0], maxx[v][0]});
}
int find_result(int u, int v){
    return (lca(u, v));
}
void solve1(){
    h[1] = 0; up[1][0] = 1; dfs(1, 0);
    int t, u, v;
    while (q--){
        cin >> t >> u >> v;
        if (t == 1){
            update(u, v);
        }
        if (t == 2){
            cout << find_result(u, v) << " ";
        }
    }
}

const int N = 2e5 + 5;
const int D = 19;
const int S = (1 << D);
int sz[N], dep[N];
int st[S], id[N], tp[N];
 
void upst(int idx, int val, int i = 1, int l = 1, int r = n) {
	if (l == r) {
		st[i] = val;
		return;
	}
	int m = (l + r) / 2;
	if (idx <= m) upst(idx, val, i * 2, l, m);
	else upst(idx, val, i * 2 + 1, m + 1, r);
	st[i] = max(st[i * 2], st[i * 2 + 1]);
}
int query(int lo, int hi, int i = 1, int l = 1, int r = n) {
	if (lo > r || hi < l) return 0;
	if (lo <= l && r <= hi) return st[i];
	int m = (l + r) / 2;
	return max(query(lo, hi, i * 2, l, m), query(lo, hi, i * 2 + 1, m + 1, r));
}
int dfs_sz(int cur, int par) {
	sz[cur] = 1;
	for (int chi : graph[cur]) {
		if (chi == par) continue;
		dep[chi] = dep[cur] + 1;
		up[chi][0] = cur;
		sz[cur] += dfs_sz(chi, cur);
	}
	return sz[cur];
}
void init_lca() {
	for (int d = 1; d < 18; d++)
		for (int i = 1; i <= n; i++) up[i][d] = up[up[i][d - 1]][d - 1];
}
int ct = 1;
void dfs_hld(int cur, int par, int top) {
	id[cur] = ct++;
	tp[cur] = top;
	upst(id[cur], val[cur]);
	int h_chi = -1, h_sz = -1;
	for (int chi : graph[cur]) {
		if (chi == par) continue;
		if (sz[chi] > h_sz) {
			h_sz = sz[chi];
			h_chi = chi;
		}
	}
	if (h_chi == -1) return;
	dfs_hld(h_chi, cur, top);
	for (int chi : graph[cur]) {
		if (chi == par || chi == h_chi) continue;
		dfs_hld(chi, cur, chi);
	}
}
int find_lca(int a, int b) {
	if (dep[a] < dep[b]) swap(a, b);
	for (int d = D - 1; d >= 0; d--) {
		if (dep[a] - (1 << d) >= dep[b]) { a = up[a][d]; }
	}
	for (int d = D - 1; d >= 0; d--) {
		if (up[a][d] != up[b][d]) {
			a = up[a][d];
			b = up[b][d];
		}
	}
	if (a != b) {
		a = up[a][0];
		b = up[b][0];
	}
	return a;
}
int path(int chi, int par) {
	int ret = 0;
	while (chi != par) {
		if (tp[chi] == chi) {
			ret = max(ret, val[chi]);
			chi = up[chi][0];
		} else if (dep[tp[chi]] > dep[par]) {
			ret = max(ret, query(id[tp[chi]], id[chi]));
			chi = up[tp[chi]][0];
		} else {
			ret = max(ret, query(id[par] + 1, id[chi]));
			break;
		}
	}
	return ret;
}
void solve2(){
	dfs_sz(1, 1);
	init_lca();
	memset(st, 0, sizeof st);
	dfs_hld(1, 1, 1);
	while (q--) {
		int t; cin >> t;
		if (t == 1) {
			int s, x; cin >> s >> x;
			val[s] = x;
			upst(id[s], val[s]);
		} else {
			int a, b; cin >> a >> b;
			int c = find_lca(a, b);
			int res = max(max(path(a, c), path(b, c)), val[c]);
			cout << res << '\n';
		}
	}
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
    if (val[1] == 97) solve1();
    else solve2();
    return 0;
}