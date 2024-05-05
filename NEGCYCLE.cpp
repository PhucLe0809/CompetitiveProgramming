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
vector<int> find_neg_cycle(int n, int m, vector <int> &trace){
    int start = -1;
    int u, v, w;
    for (int i = 0; i < m; i++){
        u = edge[i].u; v = edge[i].v; w = edge[i].w;
        if (dis[u]!=inf && dis[v] > dis[u]+w){
            dis[v] = -inf;
            trace[v] = u;
            start = v;
        }
    }
    if (start==-1) return vector <int> (0);
    u = start;
    for (int t = 0; t < n; t++){
        u = trace[u];
    }
    vector <int> cycle(1, u);
    for (v = trace[u];  v != u; v = trace[v]){
        cycle.push_back(v);
    }
    reverse(cycle.begin(), cycle.end());
    return cycle;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, s; cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
    }
    bellman_ford(n, m, s, edge, dis, trace);
    // check_neg_cycle(n, m, s, edge, dis, trace);
    vector <int> out = find_neg_cycle(n, m, trace);
    if (out.empty()) cout << -1;
    else for (auto &v:out) cout << v << " ";
    return 0;
}