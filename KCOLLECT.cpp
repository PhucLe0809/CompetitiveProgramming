#include <bits/stdc++.h>
#define maxarray 10005
#define inf 1000000009

using namespace std;
int n, m;
int times = 0, scc = 0;
vector <char> a(maxarray);
vector <vector<int>> graph(maxarray), dag(maxarray);
vector <int> low(maxarray), num(maxarray), root(maxarray);
vector <int> total(maxarray), scan(maxarray), val(maxarray);
vector <bool> deleted(maxarray, false);
stack <int> sta;

int getid(int i, int j){
    return (i-1)*n+j;
}
bool check(int i, int j){
    if (a[(i-1)*n+j] == '#') return false;
    if (1<=i && i<=m && 1<=j && j<=n) return true;
    return false;
}
void DFS(int u){
    low[u] = num[u] = ++times;
    sta.push(u);
    for (auto &it:graph[u]){
        if (deleted[it]) continue;
        if (!num[it]){
            DFS(it);
            low[u] = min(low[u], low[it]);
        }else low[u] = min(low[u], num[it]);
    }
    if (low[u] == num[u]){
        scc++; int v;
        do{
            v = sta.top(); sta.pop();
            deleted[v] = true;
            total[scc] += val[v];
            root[v] = scc;
        }while (v != u);
    }
}
int solve(int u){
    if (dag[u].empty()) return total[u];
    if (scan[u] != -1) return scan[u];
    int curr = -inf;
    for (auto &it:dag[u]) curr = max(curr, solve(it)+total[u]);
    return scan[u] = curr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    int u;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            u = getid(i, j);
            cin >> a[u];
            val[u] = (a[u]>='0' && a[u]<='9')?(a[u] - '0'):(0);
        }
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            u = getid(i, j);
            if (a[u] == '#') continue;
            if (check(i, j+1)) graph[u].push_back(getid(i, j+1));
            if (check(i+1, j)) graph[u].push_back(getid(i+1, j));
            if (a[u] == 'W' && check(i, j-1)){
                if (check(i, j-1)) graph[u].push_back(getid(i, j-1));
            }
            if (a[u] == 'N' && check(i-1, j)){
                if (check(i-1, j)) graph[u].push_back(getid(i-1, j));
            }
        }
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            u = getid(i, j);
            if (!num[u] && check(i, j)) DFS(u);
        }
    }
    int ru, rv;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (!check(i, j)) continue;
            u = getid(i, j);
            ru = root[u];
            for (auto &v:graph[u]){
                rv = root[v];
                if (ru != rv){
                    dag[ru].push_back(rv);
                }
            }
        }
    }
    fill(scan.begin(), scan.end(), -1);
    cout << solve(root[getid(1, 1)]);
    return 0;
}