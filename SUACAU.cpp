#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int times = 0, bridge = 0;
map <pair<int, int>, int> mp;
vector <vector<int>> graph(maxarray);
vector <int> low(maxarray, 0), num(maxarray, 0);

void DFS(int u, int pre){
    times++;
    low[u] = num[u] = times;
    for (auto &it:graph[u]){
        if (it == pre) continue;
        if (!num[it]){
            DFS(it, u);
            low[u] = min(low[u], low[it]);
            if (low[it]==num[it] && mp[{min(u, it), max(u, it)}]==0) bridge++;
        }else low[u] = min(low[u], num[it]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        mp[{min(u, v), max(u, v)}] = 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    DFS(1, 1);
    cout << bridge;
    return 0;
}
