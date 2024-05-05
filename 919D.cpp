#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    string str; cin >> str;
    vector <int> deg(n+1);
    vector <vector<int>> graph(n+1);
    vector <vector<int>> dp(n+1, vector <int> (26));
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        deg[v]++;
    }
    queue <int> que;
    vector <int> topo;
    int cnt = 0;
    for (int u = 1; u <= n; u++){
        if (!deg[u]){
            que.push(u); cnt++;
            topo.push_back(u);
        }
    }
    while (!que.empty()){
        u = que.front(); que.pop();
        for (auto &v:graph[u]){
            deg[v]--;
            if (!deg[v]){
                que.push(v); cnt++;
                topo.push_back(v);
            }
        }
    }
    if (cnt != n){
        cout << -1; return 0;
    }
    reverse(topo.begin(), topo.end());
    for (auto &u:topo){
        for (auto &v:graph[u]){
            for (int i = 0; i < 26; i++){
                dp[u][i] = max(dp[u][i], dp[v][i]);
            }
        }
        dp[u][str[u-1]-'a']++;
    }
    int answer = 0;
    for (int u = 1; u <= n; u++){
        for (int i = 0; i < 26; i++){
            answer = max(answer, dp[u][i]);
        }
    }
    cout << answer;
    return 0;
}