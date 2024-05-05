#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int inp[maxarray][maxarray];
char path[maxarray][maxarray];
pair <int, int> trace[maxarray][maxarray];

void bfs(pair <int, int> s, pair <int, int> t, int n, int m){
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    char step[] = {'U', 'L', 'D', 'R'};
    int u = s.first, v = s.second;
    queue <pair<int, int>> que;
    que.push({u, v}); inp[u][v] = 2;
    trace[u][v] = {u, v};
    while (que.size()){
        auto it = que.front(); que.pop();
        u = it.first; v = it.second;
        for (int t = 0; t < 4; t++){
            int x = u + dx[t];
            int y = v + dy[t];
            char key = step[t];
            if (!(1 <= x && x <= n && 1 <= y && y <= m)) continue;
            if (inp[x][y] == 0){
                que.push({x, y});
                inp[x][y] = inp[u][v] + 1;
                path[x][y] = key;
                trace[x][y] = {u, v};
            }
        }
    }
}
string trace_path(pair <int, int> s, pair <int, int> t){
    int u = t.first, v = t.second;
    string res = "";
    while (trace[u][v] != s){
        res += path[u][v];
        pair <int, int> temp = trace[u][v];
        u = temp.first;
        v = temp.second;
    }
    res += path[u][v];
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    pair <int, int> start, thend;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            char key; cin >> key;
            if (key == '#') inp[i][j] = 1;
            else inp[i][j] = 0;
            if (key == 'A'){
                start.first = i; start.second = j;
            }
            if (key == 'B'){
                thend.first = i; thend.second = j;
            }
        }
    }
    bfs(start, thend, n, m);
    if (inp[thend.first][thend.second] < 2){
        cout << "NO\n"; return 0;
    }
    cout << "YES\n";
    cout << inp[thend.first][thend.second] - 2 << '\n';
    cout << trace_path(start, thend);
    return 0;
}