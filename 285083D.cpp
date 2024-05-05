#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
bool visited[maxarray];
int deg[maxarray], trace[maxarray];
vector <vector<pair<int, int>>> graph(maxarray);

bool is_good(int &n, int &d, int &k){
    fill(deg, deg + maxarray, LONG_MAX);
    fill(visited, visited + maxarray, false);
    queue <int> que; que.push(1);
    visited[1] = true; deg[1] = 0;
    while (que.size()){
        int u = que.front(); que.pop();
        for (auto &it:graph[u]){
            int v = it.first, w = it.second;
            if (w > k) continue;
            if (!visited[v]){
                que.push(v);
                visited[v] = true;
                deg[v] = deg[u] + 1;
            }
        }
    }
    return deg[n] <= d;
}
void GOTOHANOI(){
    int n, m, d; cin >> n >> m >> d;
    for (int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    int l = 0, r = 1e15;
    while (l < r){
        int mid = (l + r) / 2;
        if (!is_good(n, d, mid)) l = mid + 1;
        else r = mid;
    }
    if (l == 1e15){
        cout << -1 << endl;
        return;
    }
    // cout << l << endl;
    int k = l;
    fill(trace, trace + maxarray, -1);
    fill(visited, visited + maxarray, false);
    queue <int> que; que.push(1);
    visited[1] = true;
    while (que.size()){
        int u = que.front(); que.pop();
        for (auto &it:graph[u]){
            int v = it.first, w = it.second;
            if (w > k) continue;
            if (!visited[v]){
                que.push(v);
                visited[v] = true;
                trace[v] = u;
            }
        }
    }
    int node = n;
    vector <int> out(1, n);
    while (trace[node] != -1){
        out.push_back(trace[node]);
        node = trace[node];
    }
    cout << out.size() - 1 << endl;
    for (int i = (int)out.size() - 1; i >= 0; i--) cout << out[i] << " ";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}