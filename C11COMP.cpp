#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m, k;
int color[maxarray], answer[maxarray];
vector <int> graph[maxarray], query[maxarray];
int big[maxarray] = {0}, cnt[maxarray] = {0};

void pre_dfs(int u, int pre){
    big[u] = 1;
    for (auto &v: graph[u]){
        if (v == pre) continue;
        pre_dfs(v, u);
        big[u] += big[v];
    }
}
void update(int u, int pre, int delta, int &result){
    cnt[color[u]] += delta;
    if (delta > 0){
        if (cnt[color[u]] == 1) result++;
        if (cnt[color[u]] == k+1) result = max(result-1, 0);
    }
    if (delta < 0){
        if (cnt[color[u]] == 0) result = max(result-1, 0);
    }
    for (auto &v:graph[u]){
        if (v == pre) continue;
        update(v, u, delta, result);
    }
}
void dfs(int u, int pre, int &exper){
    int bigchild = -1;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        if (bigchild == -1 || big[bigchild] < big[v]){
            bigchild = v;
        }
    }
    for (auto &v:graph[u]){
        if (v == pre || v == bigchild) continue;
        dfs(v, u, exper);
        update(v, u, -1, exper);
    }
    if (bigchild != -1) dfs(bigchild, u, exper);
    for (auto &v:graph[u]){
        if (v == pre || v == bigchild) continue;
        update(v, u, 1, exper);
    }
    cnt[color[u]]++;
    if (cnt[color[u]] == 1) exper++;
    if (cnt[color[u]] == k+1) exper--;
    // cout << u << " " << cnt[color[u]] << " " << bigchild << " " << exper << endl;
    for (auto &it:query[u]) answer[it] = exper;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    int x;
    for (int y = 2; y <= n; y++){
        cin >> x;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) cin >> color[i];
    int q; cin >> q;
    int u;
    for (int i = 0; i < q; i++){
        cin >> u;
        query[u].push_back(i);
    }
    pre_dfs(1, 0);
    int tmp = 0;
    dfs(1, 0, tmp);
    for (int i = 0; i < q; i++) cout << answer[i] << '\n';
    return 0;
}