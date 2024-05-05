#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
int n, m;
bool choose[maxarray];
double dis[maxarray]; int trace[maxarray];
vector <pair<int, int>> graph[maxarray];

bool is_good(double x){
    fill(choose, choose + maxarray, false);
    fill(dis, dis + maxarray, 1e9);
    fill(trace, trace + maxarray, -1);
    priority_queue <pair<int, double>, vector <pair<int, double>>, greater<>> que;
    dis[1] = 0.0; que.push({1, dis[1]});
    while ((int)que.size()){
        auto it = que.top(); que.pop();
        int u = it.first;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &node:graph[u]){
            int v = node.first;
            double w = node.second - x;
            if (dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                que.push({v, dis[v]});
                trace[v] = u;
            }
        }
    }
    return dis[n] >= 0;
}
vector<int> trace_path(){
    vector <int> path;
    int u = n;
    while (u != -1){
        path.push_back(u);
        u = trace[u];
    }
    return path;
}
void GOTOHANOI(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    double l = 0.0;
    double r = 100.0;
    for (int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        // cout << mid << endl;
        if (!is_good(mid)) r = mid;
        else l = mid;
    }
    // cout << fixed << setprecision(9) << l << endl;
    // for (int u = 1; u <= n; u++) cout << dis[u] << " "; cout << endl;
    vector <int> path = trace_path();
    int k = path.size();
    cout << k - 1 << endl;
    for (int i = k - 1; i >= 0; i--) cout << path[i] << " "; cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}