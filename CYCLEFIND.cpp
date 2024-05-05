#include <bits/stdc++.h>
#define inf 2000000000000000007
#define maxarray 5005
 
using namespace std;
struct bell{
    int u, v; int64_t w;
};
vector <bell> edge(maxarray);
vector <int64_t> dis(maxarray, inf);
vector <int> trace(maxarray, -1);
vector <bool> check(maxarray, false);
 
void bellman_ford(int n, int m, int s, vector <bell> &edge, vector <int64_t> &dis, vector <int> &trace){
    // fill(dis.begin(), dis.end(), inf);
    // fill(trace.begin(), trace.end(), -1);
    int u, v; int64_t w; 
    dis[s] = 0;
    for (int t = 0; t < n; t++){
        for (int i = 0; i < m; i++){
            u = edge[i].u; v = edge[i].v; w = edge[i].w;
            if (dis[u]!=inf && dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                trace[v] = u;
                check[i] = true;
            }
        }
    }
}
vector<int> find_neg_cycle(int n, int m, vector <bell> &edge, vector <int64_t> &dis, vector <int> &trace){
    int u, v; int64_t w;
    int start = -1;
    for (int i = 0; i < m; i++){
        u = edge[i].u; v = edge[i].v; w = edge[i].w;
        if (dis[u]!=inf && dis[v] > dis[u]+w && check[i]){
            dis[v] = -inf;
            // trace[v] = u;
            start = v;
        }
    }
    if (start == -1) return vector <int> (0);
    u = start;
    for (int t = 0; t < n; t++) u = trace[u];
    vector <int> cycle(1, u);
    for (v = trace[u]; v != u; v = trace[v]){
        cycle.push_back(v);
    }
    reverse(cycle.begin(), cycle.end());
    cycle.push_back(cycle[0]);
    return cycle;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int a, b; a = b = 0;
    for (int i = 0; i < m; i++){
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
        if ((edge[i].u!=edge[i].v) && edge[i].w < 0) a++;
        if ((edge[i].u==edge[i].v) && edge[i].w < 0) b++;
    }
    if (b==0 && a<2){
        cout << "NO\n"; return 0;
    }
    for (int s = 1; s <= n; s++){
        if (dis[s]==inf){
            bellman_ford(n, m, s, edge, dis, trace);
            vector <int> out = find_neg_cycle(n, m, edge, dis, trace);
            if (out.size()!=0){
                cout << "YES\n";
                for (auto &it:out) cout << it << " ";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}