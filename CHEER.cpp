#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int par[maxarray], c[maxarray];
vector <pair<int, pair<int, int>>> edge;

int find_set(int v){
    return (v == par[v])?(v):(par[v] = find_set(par[v]));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> c[i];
        par[i] = i;
    }
    int u, v, w;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        edge.push_back({c[u] + c[v] + 2*w, {u, v}});
    }
    sort(edge.begin(), edge.end());
    int64_t answer = (*min_element(c+1, c+n+1))*1LL;
    for (int i = 0; i < m; i++){
        int w = edge[i].first, u = edge[i].second.first, v = edge[i].second.second;
        u = find_set(u);
        v = find_set(v);
        if (u != v){
            par[v] = u;
            answer += w*1LL;
        }
    }
    cout << answer;
    return 0;
}