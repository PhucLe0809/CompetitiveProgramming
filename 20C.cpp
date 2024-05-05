#include <bits/stdc++.h>
#define inf 2000000000000000007
#define maxarray 100005

using namespace std;
vector <vector<pair<int, int64_t>>> graph(maxarray);
vector <int64_t> dis(maxarray, inf);
vector <bool> choose(maxarray, false);
vector <int> trace(maxarray, -1);
priority_queue <pair<int64_t, int>, vector <pair<int64_t, int>>, greater<>> que;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v; int64_t w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    que.push({0, 1}); dis[1] = 0;
    while (que.size()){
        auto pivot = que.top(); que.pop();
        u = pivot.second;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &it:graph[u]){
            v = it.first; w = it.second;
            if (dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                que.push({dis[v], v});
                trace[v] = u;
            }
        }
    }
    if (trace[n] == -1) cout << -1;
    else{
        // cout << dis[n] << endl;
        vector <int> out(1, n);
        u = n;
        for (v = trace[u]; v != 1; v = trace[v]){
            out.push_back(v);
        }
        out.push_back(1);
        reverse(out.begin(), out.end());
        for (auto &it:out) cout << it << " ";
    }
    return 0;
}