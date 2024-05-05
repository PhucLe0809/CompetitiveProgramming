#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while (true){
        int n; cin >> n;
        if (n==0) break;
        int m; cin >> m;
        vector <vector<int>> graph(n);
        int u, v;
        for (int i = 0; i < m; i++){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        bool check = true;
        vector <int> color(n, -1);
        queue <int> q;
        q.push(0); color[0] = 0;
        while (q.size() && check){
            v = q.front(); q.pop();
            for (auto &it:graph[v]){
                if (color[it]==-1){
                    color[it] = 1-color[v];
                    q.push(it);
                }else{
                    if (color[it]==color[v]) check = false;
                }
            }
        }
        if (check) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";
    }
    return 0;
}