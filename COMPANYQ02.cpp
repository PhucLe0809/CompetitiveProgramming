#include <bits/stdc++.h>
#define maxarray 200005
#define log2n 19

using namespace std;
int root, times = 0;
int mlog[2*maxarray][log2n];
int h[maxarray], tour[2*maxarray], start[maxarray], thend[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    times++;
    tour[times] = u; start[u] = thend[u] = times;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        h[v] = h[u] + 1;
        dfs(v, u);
    }
    if (u == root) return;
    times++;
    tour[times] = pre; thend[pre] = times;
}
void preprocess(int n){
    for (int i = 1; i <= n; i++) mlog[i][0] = i;
    for (int j = 1; (1 << j) <= n; j++){
        for (int i = 1; i+(1 << j)-1 < n; i++){
            if (h[tour[mlog[i][j-1]]] < h[tour[mlog[i+(1 << (j-1))][j-1]]]){
                mlog[i][j] = mlog[i][j-1];
            }else{
                mlog[i][j] = mlog[i+(1 << (j-1))][j-1];
            }
        }
    }
}
int rmq(int u, int v){
    if (start[u] > start[v]) swap(u, v);
    int i = start[u], j = start[v];
    int k = __lg(j - i + 1);
    if (h[tour[mlog[i][k]]] <= h[tour[mlog[j-(1 << k)+1][k]]]) return tour[mlog[i][k]];
    else return tour[mlog[j-(1 << k)+1][k]];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    int x;
    for (int y = 2; y <= n; y++){
        cin >> x;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    root = 1; h[root] = 0; dfs(root, root);
    preprocess(times);
    int u, v;
    while (q--){
        cin >> u >> v;
        cout << rmq(u, v) << '\n';
    }
    return 0;
}