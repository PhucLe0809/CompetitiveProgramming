#include <bits/stdc++.h>
#define maxarray 100005
#define mod 1000000007

using namespace std;
vector <vector<pair<int, int>>> graph(maxarray), rever(maxarray);
vector <int> visited(maxarray), root(maxarray);
vector <int> topo;

void DFS(int u){
    visited[u] = 1;
    for (auto &it:graph[u]){
        if (!visited[it.first]) DFS(it.first);
        if (visited[it.first] == 1){
            cout << "inf\n"; exit(0);
        }
    }
    topo.push_back(u);
    visited[u] = 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int u, v;
    map <pair<int, int>, int> mp;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        mp[{u, v}]++;
    }
    for (auto &it:mp){
        u = it.first.first; v = it.first.second;
        graph[u].push_back({v, it.second});
        rever[v].push_back({u, it.second});
    }
    for (int u = 1; u <= n; u++){
        if (!visited[u]) DFS(u);
    }
    vector <int64_t> dp(n+1, 0);
    int t, w; t = 0;
    // for (int i = 0; i < n; i++) cout << topo[i] << " "; cout << endl;
    while (topo[t]!=n){
        if (topo[t] == 1){
            cout << "0\n"; exit(0);
        }
        t++;
    }
    int64_t answer; root[n] = 1;
    for (int k = t; k < n; k++){
        u = topo[k];
        if (dp[u] == 0) dp[u] = 1;
        for (auto &it:rever[u]){
            v = it.first; w = it.second;
            if (root[u]){
                dp[v] += ((dp[u]%mod) * (1LL*w%mod)) % mod;
                root[v] = 1;
                dp[v] %= mod;
            }
        }
        if (u == 1){
            answer = dp[u]; break;
        }
    }
    if (root[n] == 0){
        cout << "0\n"; return 0;
    }
    cout << answer%mod;
    return 0;
}
