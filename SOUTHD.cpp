#include <bits/stdc++.h>
#define maxarray 505
#define inf 1000000007

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};
int inp[maxarray][maxarray];
vector <pair<int, int>> graph[maxarray*maxarray];
int dis[maxarray*maxarray];
bool choose[maxarray*maxarray];

void dijkstra(int s){
    fill(dis, dis + maxarray*maxarray, inf);
    fill(choose, choose + maxarray*maxarray, false);
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> que;
    dis[s] = 0; que.push({dis[s], s});
    int u, v, w;
    while (que.size()){
        auto pivot = que.top(); que.pop();
        u = pivot.second;
        if (choose[u]) continue;
        choose[u] = true;
        for (auto &it:graph[u]){
            v = it.first; w = it.second;
            if (dis[v] > dis[u]+w){
                dis[v] = dis[u]+w;
                que.push({dis[v], v});
            }
        }
    }
}
int solve1(int n, int m){
    for (int i = 0; i <= n*n; i++) graph[i].clear();
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int u = (i-1)*n + j;
            for (int t = 0; t < 4; t++){
                int x = i + dx[t];
                int y = j + dy[t];
                if (!(1 <= x && x <= n && 1 <= y && y <= n)) continue;
                int v = (x-1)*n + y;
                int weight = (inp[x][y] < m)?(1):(0);
                graph[u].push_back({v, weight});
            }
        }
    }
    dijkstra(1);
    int res = 0;
    if (inp[1][1] < m) res++;
    return dis[n*n] + res;
}
int solve2(int n){
    int l = 1, r = inp[n][n];
    while (l <= r){
        int mid = (l + r)/2;
        if (solve1(n, mid) == 0){
            l = mid+1;
        }else r = mid-1;
    }
    return l-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int type; cin >> type;
    if (type == 1){
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> inp[i][j];
            }
        }
        cout << solve1(n, m);
    }
    else{
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> inp[i][j];
            }
        }
        cout << solve2(n);
    } 
    return 0;
}