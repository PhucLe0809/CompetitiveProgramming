#include <bits/stdc++.h>
#define inf 1000000007
#define maxarray 105

using namespace std;
vector <vector<int>> graph(maxarray, vector <int> (maxarray));
vector <vector<int>> dis(maxarray, vector <int> (maxarray));
vector <vector<int>> trace(maxarray, vector <int> (maxarray)); 

void floyd_warshall(int n, vector <vector<int>> &graph, vector <vector<int>> &dis, vector <vector<int>> &trace){
    dis = graph;
    for (int u = 0; u < n; u++){
        for (int v = 0; v < n; v++){
            trace[u][v] = u;
        }
    }
    for (int k = 0; k < n; k++){
        for (int u = 0; u < n; u++){
            for (int v = 0; v < n; v++){
                if (dis[u][v] > dis[u][k]+dis[k][v]){
                    dis[u][v] = dis[u][k]+dis[k][v];
                    trace[u][v] = trace[k][v];
                }
            }
        }
    }
}
vector<int> trace_path(int u, int v, vector <vector<int>> &trace){
    vector <int> path;
    while (v != u){
        path.push_back(v);
        v = trace[u][v];
    }
    path.push_back(u);
    reverse(path.begin(), path.end());
    return path;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }
    floyd_warshall(n, graph, dis, trace);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << dis[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}