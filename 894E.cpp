#include <bits/stdc++.h>
#define maxarray 1000005

using namespace std;
int n, m, times = 0, scc = 0;
vector <vector<pair<int, int>>> graph(maxarray), dag(maxarray);
vector <int> low(maxarray), num(maxarray), root(maxarray);
vector <bool> deleted(maxarray, false);
vector <int64_t> total(maxarray), scan(maxarray);
stack <pair<int, int>> sta;

void DFS(int u, int mush){
    low[u] = num[u] = ++times;
    sta.push({u, mush});
    int v, w;
    for (auto &pivot:graph[u]){
        v = pivot.first; w = pivot.second;
        if (deleted[v]) continue;
        if (!num[v]){
            DFS(v, w); 
            low[u] = min(low[u], low[v]);
        }else low[u] = min(low[u], num[v]);
    }
    if (low[u] == num[u]){
        scc++; cout << scc << " ";
        do{
            auto pivot = sta.top(); sta.pop();
            v = pivot.first; w = pivot.second;
            deleted[v] = true;
            total[scc] += w;
            root[v] = scc;
            cout << v << " ";
        }while (v != u);
        cout << total[scc] << endl;
    }
}
int64_t solve(int u){
    if (dag[u].empty()) return total[u];
    if (scan[u] != -1) return scan[u];
    int64_t curr = INT_MIN;
    int v, w;
    for (auto &pivot:dag[u]){
        v = pivot.first; w = pivot.second;
        curr = max(curr, solve(v) + w);
    }
    return scan[u] = curr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    int s; cin >> s;
    for (int u = 1; u <= n; u++){
        if (!num[u]) DFS(u, 0);
    }
    for (int u = 1; u <= n; u++){
        for (auto &v:graph[u]){
            if (root[u] != root[v.first]){
                dag[root[u]].push_back({root[v.first], v.second});
            }
        }
    }
    for (int u = 1; u <= scc; u++){
        cout << u << " ";
        for (auto &v:dag[u]) cout << v.first << " ";
        cout << total[u] << endl;
    }
    fill(scan.begin(), scan.end(), -1);
    cout << solve(root[s]);
    return 0;
}