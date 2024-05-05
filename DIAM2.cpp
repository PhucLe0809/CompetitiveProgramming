#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
vector <int> len(maxarray, 0);
vector <bool> tick(maxarray, false);
vector <vector<int>> graph(maxarray);

void DFS(int v){
    tick[v] = true;
    if (graph[v].empty()){
        len[v] = 0; return;
    }
    int depth = 0;
    for (auto &x:graph[v]){
        if (!tick[x]) DFS(x);
        depth = max(depth, len[x]);
    }
    len[v] = depth+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //(((()())(((())))())(()))
    string str; cin >> str;
    int n = str.size();
    int id = 0;
    stack <int> sta;
    for (auto &it:str){
        if (it=='('){
            id++;
            if (!sta.empty()){
                graph[sta.top()].push_back(id);
            }
            sta.push(id);
        }else sta.pop();
    }
    for (int u = 1; u <= n/2; u++){
        if (!tick[u]) DFS(u);
    }
    int path, answer = 0;
    for (int u = 1; u <= n/2; u++){
        if (graph[u].empty()) continue;
        if (graph[u].size()==1){
            answer = max(answer, len[u]); continue;
        }
        path = 0;
        for (int i = 0; i < graph[u].size()-1; i++){
            for (int j = i+1; j < graph[u].size(); j++){
                path = max(path, len[graph[u][i]]+len[graph[u][j]]);
            }
        }
        answer = max(answer, path+2);
    }
    cout << answer << '\n';
    // for (int i = 1; i <= n/2; i++) cout << len[i] << " "; cout << '\n';
    // for (int i = 1; i <= n/2; i++){
    //     for (auto &x:graph[i]) cout << x << " ";
    //     cout << '\n';
    // }
    return 0;
}