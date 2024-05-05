#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
vector <int> graph[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    vector <int> deg(n+1);
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        deg[u]++; deg[v]++;
    }
    for (int u = 1; u <= n; u++){
        if (deg[u] >= k) continue;
        for (auto &it:graph[u]) deg[it]--;
    }
    vector <int> out;
    for (int u = 1; u <= n; u++){
        if (deg[u] >= k) out.push_back(u);
    }
    cout << out.size() << endl;
    for (auto &it:out) cout << it << " ";
    return 0;
}
