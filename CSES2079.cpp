#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int n;
int child[maxarray];
vector <int> graph[maxarray];

void dfs(int u, int pre){
    child[u] = 1;
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs(v, u); child[u] += child[v];
    }
}
int find_centroid(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        if (child[v] > n/2) return find_centroid(v, u);
    }
    return u;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    cout << find_centroid(1, 0);
    return 0;
}