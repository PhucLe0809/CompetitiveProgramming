#include <bits/stdc++.h>
#define inf 1000000007
#define maxarray 1005

using namespace std;
struct data{
    int u, v, w;
};
vector <data> edge(maxarray);
vector <int> dis(maxarray), trace(maxarray);

void bellman_ford(int n, int m, int s, vector <data> &edge, vector <int> &dis, vector <int> &trace){
    fill(dis.begin(), dis.end(), inf);
    fill(trace.begin(), trace.end(), -1);
    int u, v, w;
    dis[s] = 0;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                trace[v] = u;
            }
        }
    }
}
void check_neg_cycle(int n, int m, int s, vector <data> &edge, vector <int> &dis, vector <int> &trace){
    int u, v, w;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = -inf;
                trace[v] = u;
            }
        }
    }
}
vector<int> trace_path(int s, int u, vector <int> &trace){
    if (dis[u]==-inf || (u!=s && trace[u]==-1)) return vector<int>(0);
    vector <int> path;
    while (u != -1){
        path.push_back(u);
        u = trace[u];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s; cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
    }
    bellman_ford(n, m, s, edge, dis, trace);
    check_neg_cycle(n, m, s, edge, dis, trace);
    for (int u = 0; u < n; u++){
        if (dis[u]==inf){ cout << "Impossible\n"; continue; }
        if (dis[u]==-inf){ cout << "-Infinity\n"; continue; }
        cout << dis[u] << '\n';
    }
    // vector <int> out;
    // for (int u = 0; u < n; u++){
    //     out = trace_path(s, u, trace);
    //     for (auto &v:out) cout << v << " "; cout << '\n';
    // }
    return 0;
}