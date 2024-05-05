#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct __edge{
    int u, v, id;
};
int n, m;
vector <__edge> edge;
vector <int> sweep, visited(maxarray);
vector <pair<int, int>> scan, graph[maxarray];
map <pair<int, int>, int> mp;

void dfs(int u, int indx){
    visited[u] = true;
    for (auto &it:graph[u]){
        int v = it.first, id = it.second;
        if (id == indx) continue;
        if (!visited[v]){
            if (mp[{u, v}] == 1) scan.push_back({u, v});
            else scan.push_back({v, u});
            sweep.push_back(id);
            dfs(v, id);
        }
    }
}
void solve(int u, int pre){
    fill(visited.begin(), visited.end(), false);
    sweep.clear(); scan.clear();
    dfs(u, pre);
}
void scan_mst(vector <int> &a, vector < pair<vector<pair<int, int>>, vector <int>> > &inp){
    if (a.size() != n-1) return;
    sort(a.begin(), a.end());
    vector <int> b;
    int cnt = 0;
    for (int i = 0; i < inp.size(); i++){
        b = inp[i].second;
        for (int j = 0; j < n-1; j++){
            if (a[j] != b[j]){
                cnt++; break;
            }
        }
    }
    if (cnt == inp.size()) inp.push_back({scan, a});
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        mp[{u, v}] = 1;
        edge.push_back({u, v, i});
        graph[u].push_back({v, i});
        graph[v].push_back({u, i});
    }
    vector < pair<vector<pair<int, int>>, vector <int>> > answer;
    int id;
    for (int i = 0; i < m; i++){
        u = edge[i].u; v = edge[i].v; id = edge[i].id;
        solve(u, id); scan_mst(sweep, answer);
        solve(v, id); scan_mst(sweep, answer);
        if (answer.size() >= 3) break;
    }
    cout << 3 << '\n';
    vector <pair<int, int>> out;
    for (int i = 0; i < 3; i++){
        out = answer[i].first;
        for (auto &it:out) cout << it.first << " " << it.second << '\n';
    }
    return 0;
}