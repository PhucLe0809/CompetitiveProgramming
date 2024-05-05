#include <bits/stdc++.h>
#define maxarray 100005
#define mod 1000000007

using namespace std;
int par[maxarray];
pair<int64_t, int64_t> dp[maxarray];
vector <int> graph[maxarray];
vector <int> topo;

void dfs(int u, int pre){
    par[u] = pre;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u);
    }
    topo.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x, y;
    for (int i = 1; i < n; i++){
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1, 0);
    for (int i = 0; i < maxarray; i++) dp[i] = {1, 1};
    for (auto &u:topo){
        for (auto &v:graph[u]){
            if (v == par[u]) continue;
            dp[u].first = (dp[u].first * ((dp[v].first + dp[v].second)%mod)) % mod;
            dp[u].second = (dp[u].second * dp[v].first) % mod;
        }
    }
    cout << (dp[topo.back()].first + dp[topo.back()].second) % mod;
    return 0;
}