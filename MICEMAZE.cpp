#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e, t; cin >> n >> e >> t;
    int m; cin >> m;
    vector <vector<pair<int, int>>> inp(n+1);
    int u, v, w;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        inp[v].push_back({u, w});
    }
    vector <int> distan(n+1, INT_MAX);
    distan[e] = 0;
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> que;
    que.push({0, e});
    int d;
    pair <int, int> tmp;
    while (!que.empty()){
        tmp = que.top(); que.pop();
        d = tmp.first; u = tmp.second;
        if (d > distan[u]) continue;
        for(auto &it:inp[u]){
            v = it.first; w = it.second;
            if (distan[v] > distan[u] + w){
                distan[v] = distan[u] + w;
                que.push({distan[v], v});
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
        if (distan[i] <= t) cnt++;
    cout << cnt;
    return 0;
}


