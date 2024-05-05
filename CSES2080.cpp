#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n, k, mx_depth; 
int64_t answer = 0;
int child[maxarray], dele[maxarray], h[maxarray], cnt[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    child[u] = 1;
    for (auto &v:graph[u]){
        if (v == pre || dele[v]) continue;
        dfs(v, u);
        child[u] += child[v];
    }
}
int find_centroid(int u, int pre, int &ele){
    for (auto &v:graph[u]){
        if (v == pre || dele[v]) continue;
        if (child[v] > ele/2) return find_centroid(v, u, ele);
    }
    return u;
}
void get_cnt(int u, int pre, bool filling, int depth = 1) {
	if (depth > k) return;
	mx_depth = max(mx_depth, depth);
	if (filling) cnt[depth]++;
	else answer += cnt[k - depth];
	for (auto &v:graph[u]){
		if (v == pre || dele[v]) continue;
        get_cnt(v, u, filling, depth+1);
    }
}
void update_answer(int u){
    fill(cnt + 1, cnt + mx_depth+1, 0);
    cnt[0] = 1; mx_depth = 0; h[u] = 0;
    for (auto &v:graph[u]){
        if (!dele[v]){
            get_cnt(v, u, false);
            get_cnt(v, u, true);
        }
    }
}
void solve(int u){
    dfs(u, 0);
    if (child[u] == 1) return;
    int root = find_centroid(u, 0, child[u]);
    dele[root] = 1;
    update_answer(root);
    for (auto &v:graph[root]){
        if (!dele[v]) solve(v);
    }
}
void dfs_diam(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        h[v] = h[u]+1; dfs_diam(v, u);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    if (k == n){
        cout << 0; return 0;
    }
    if (k == 1){
        cout << n-1; return 0;
    }

    int one = 0, two = 0;
    for (int i = 1; i <= n; i++){
        if (graph[i].size() == 1) one++;
        if (graph[i].size() == 2) two++;
    }
    if (one + two == n && one == 2){
        cout << n-k; return 0;
    }

    int diam = -1, node = 0;
    h[1] = 0; dfs_diam(1, 0);
    for (int u = 1; u <= n; u++){
        if (diam < h[u]){
            diam = h[u]; node = u;
        }
    }
    h[node] = 0; dfs_diam(node, 0); diam = -1;
    for (int u = 1; u <= n; u++){
        if (diam < h[u]){
            diam = h[u]; node = u;
        }
    }
    if (diam < k){
        cout << 0; return 0;
    }

    solve(1);
    cout << answer;
    return 0;
}