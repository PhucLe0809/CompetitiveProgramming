#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 305
#define inf 1000000007

using namespace std;
int cnt = 0;
bool visited[maxarray];
vector <int> graph[maxarray];
vector <int> scan[maxarray];

void dfs(int u){
    visited[u] = true;
    scan[cnt].push_back(u);
    for (auto &it:graph[u]){
        if (!visited[it]) dfs(it);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            char key; cin >> key;
            if (key == '1'){
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    fill(visited, visited + n, false);
    for (int u = 0; u < n; u++){
        if (!visited[u]){
            dfs(u); cnt++;
        }
    }
    vector <int> answer(n);
    for (int i = 0; i < cnt; i++){
        vector <int> num;
        for (auto &it:scan[i]) num.push_back(inp[it]);
        sort(num.begin(), num.end());
        sort(scan[i].begin(), scan[i].end());
        for (int j = 0; j < scan[i].size(); j++){
            answer[scan[i][j]] = num[j];
        }
    }
    for (auto &it:answer) cout << it << " ";
    return 0;
}