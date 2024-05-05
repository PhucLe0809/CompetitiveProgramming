#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int child[maxarray];
pair <int, int> len[maxarray];
vector <int> graph[maxarray];

void dfs_child(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        dfs_child(v, u);
        if (len[v].first + 1 > len[u].first){
            len[u].second = len[u].first;
            len[u].first = len[v].first + 1;
            child[u] = v;
        }else len[u].second = max(len[u].second, len[v].first + 1);
    }
}
void dfs_parent(int u, int pre){
    for (auto &v:graph[u]){
        if (v == pre) continue;
        if (child[u] == v){
            if (len[v].first < len[u].second + 1){
                len[v].second = len[v].first;
                len[v].first = len[u].second + 1;
                child[v] = u;
            }else len[v].second = max(len[v].second, len[u].second + 1);
        }else{
            len[v].second = len[v].first;
            len[v].first = len[u].first + 1;
            child[v] = u;
        }
        dfs_parent(v, u);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int u, v; 
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs_child(1, 0);
    dfs_parent(1, 0);
    for (int u = 1; u <= n; u++) cout << len[u].first << " ";
    return 0;
}