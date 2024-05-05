#include <bits/stdc++.h>
#define maxarray 1005
#define limit 1000005

using namespace std;
int arr[maxarray][maxarray], water[maxarray][maxarray];
vector <pair<int, int>> scan[limit];
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};

void bfs(int u, int v, int val){
    queue <pair<int, int>> que;
    water[u][v] = val; que.push({u, v});
    while (que.size()){
        auto it = que.front(); que.pop();
        int x = it.first, y = it.second;
        for (int t = 0; t < 4; t++){
            u = x+dx[t]; v = y+dy[t];
            if (!water[u][v] && arr[u][v] <= val){
                water[u][v] = val;
                que.push({u, v});
            }
        }
    }
}
bool is_boder(int x, int y){
    for (int t = 0; t < 4; t++){
        if (water[x+dx[t]][y+dy[t]]) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> m >> n;
    memset(water, -1, sizeof(water));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> arr[i][j];
            scan[arr[i][j]].push_back({i, j});
            water[i][j] = 0;
        }
    }
    int u, v;
    for (int val = 1; val < limit; val++){
        for (int j = 0; j < scan[val].size(); j++){
            int x = scan[val][j].first, y = scan[val][j].second;
            if (!water[x][y] && is_boder(x, y)) bfs(x, y, val);
        }
    }
    int64_t answer = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            answer += max(water[i][j] - arr[i][j], 0)*1LL;
        }
    }
    cout << answer;
    return 0;
}