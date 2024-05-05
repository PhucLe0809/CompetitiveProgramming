#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int times = 0;
map <pair<int, int>, int> mp;
vector <vector<int>> graph(maxarray), scan(maxarray);
vector <int> low(maxarray, 0), num(maxarray, 0), tail(maxarray, 0);
vector <pair<int, int>> bridge;

void DFS(int u, int pre){
    low[u] = num[u] = ++times;
    for (auto &it:graph[u]){
        if (it == pre) continue;
        if (!num[it]){
            DFS(it, u);
            low[u] = min(low[u], low[it]);
            if (low[it] == num[it]) bridge.push_back({u, it});
        }else low[u] = min(low[u], num[it]);
    }
    tail[u] = times;
}
bool checksub(int u, int root){
    return (num[root]<=num[u] && num[u]<=tail[root]);
}
void Fly(int n){
    int a, b;
    for (auto &it:bridge){
        a = it.first; b = it.second;
        // if (num[a] > num[b]) swap(a, b);
        for (int u = 1; u < n; u++){
            for (int v = u+1; v <= n; v++){
                if ((checksub(u, b) && !checksub(v, b))
                || (checksub(v, b) && !checksub(u, b))){
                    mp[{min(u, v), max(u, v)}]++;
                }
            }
        }
    }
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
        mp[{min(u, v), max(u, v)}] = 0;
    }
    for (int u = 1; u <= n; u++){
        if (!num[u]) DFS(u, u);
    }
    Fly(n);
    int answer = 0;
    for (auto &it:mp){
        answer += it.second;
    }
    cout << answer;
    return 0;
}