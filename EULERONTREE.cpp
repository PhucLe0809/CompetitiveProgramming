#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int n, m, times = 0, root = 1;
vector <vector<int>> graph(maxarray);
vector <int> height(maxarray), start(maxarray), thend(maxarray);
vector <int> tour(maxarray), bit(maxarray);

void DFS(int u, int parent){
    height[u] = height[parent]+1;
    tour[++times] = u;
    start[u] = times;
    for (auto &v:graph[u]){
        if (v != parent) DFS(v, u);
    }
    thend[u] = times;
}
int64_t sumprefix(int u){
    int64_t answer = 0;
    for (int id = u; id >= 1; id -= (id & (-id))) answer += bit[id];
    return answer;
}
void update_point(int u, int x){
    for (int id = start[u]; id <= n; id += (id & (-id))) bit[id] += x;
}
int64_t sum_point(int u){
    return sumprefix(thend[u]) - sumprefix(start[u]-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    DFS(1, 0);
    // for (int i = 1; i <= times; i++) cout << tour[i] << " ";
    return 0;
}