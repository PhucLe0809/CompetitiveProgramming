#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int times = 0;
vector <vector<int>> graph(maxarray);
vector <int> low(maxarray, 0), num(maxarray, 0), tail(maxarray, 0);
vector <vector<pair<int, int>>> sour(maxarray);
vector <bool> ispoint(maxarray, false);

void DFS(int u, int pre){
    low[u] = num[u] = ++times;
    int child = 0;
    for (auto &it:graph[u]){
        if (it == pre) continue;
        if (!num[it]){
            DFS(it, u);
            low[u] = min(low[u], low[it]);
            child++;
            if (u == pre){
                if (child > 1) ispoint[u] = true;
            }else{
                if (low[it]>=num[u]) ispoint[u] = true;
            }
        }else low[u] = min(low[u], num[it]);
        sour[u].push_back({tail[it], it});
    }
    tail[u] = times;
    sort(sour[u].begin(), sour[u].end());
}
bool checksub(int u, int root){
    return (num[root]<=num[u] && num[u]<=tail[root]);
}
bool solve1(int a, int b, int g1, int g2){
    if (num[g1] > num[g2]) swap(g1, g2);
    if (low[g2] != num[g2]) return true;
    if (checksub(a, g2) && !checksub(b, g2)) return false;
    if (checksub(b, g2) && !checksub(a, g2)) return false;
    return true;
}
bool solve2(int a, int b, int c){
    if (ispoint[c]==false) return true;
    for (auto &it:graph[c]){
        if (low[it]>=num[c] && checksub(a, it) && !checksub(b, it)) return false;
        if (low[it]>=num[c] && checksub(b, it) && !checksub(a, it)) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    DFS(1, 1);
    int q; cin >> q;
    int type, a, b, c, g1, g2;
    while (q--){
        cin >> type;
        if (type==1){
            cin >> a >> b >> g1 >> g2;
            solve1(a, b, g1, g2)?(cout << "yes\n"):(cout << "no\n");
        }else{
            cin >> a >> b >> c;
            solve2(a, b, c)?(cout << "yes\n"):(cout << "no\n");
        }
    }
    return 0;
}