#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int arr[n][m];
    int dis[n][m]; bool check[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            dis[i][j] = INT_MAX;
            check[i][j] = false;
        }
    }
    deque <pair<int, int>> que;
    que.push_back({0, 0}); dis[0][0] = 0;
    int x, y, u, v, d;
    int dx[]={0, 0, 1, -1};
    int dy[]={1, -1, 0, 0};
    while (que.size()){
        x = que.front().first; y = que.front().second;
        que.pop_front();
        for (int t = 0; t < 4; t++){
            u = x+dx[t]; v = y+dy[t];
            if (0<=u && u<n && 0<=v && v<m){
                d = dis[x][y] + (arr[x][y]!=t+1);
                if (arr[x][y]==t+1){
                    if (dis[u][v] > d){
                        dis[u][v] = d;
                        que.push_front({u, v});
                    }
                }else{
                    if (check[x][y]) continue;
                    if (dis[u][v]> d){
                        dis[u][v] = d;
                        que.push_back({u, v});
                    }
                }
            }
        }
        check[x][y] = true;
    }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dis[n-1][m-1];
    return 0;
}