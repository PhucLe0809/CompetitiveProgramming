#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int dis[3][n][m];
    int dx[]={-1, 0, 1, 0};
    int dy[]={0, -1, 0, 1};
    for (int state = '1'; state <= '3'; state++){
        deque <pair<int, int>> que;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j]==state){
                    dis[state-'1'][i][j] = 0;
                    que.push_back({i, j});
                }else dis[state-'1'][i][j] = INT_MAX;
            }
        }
        int x, y, u, v, d;
        while (que.size()){
            x = que.front().first; y = que.front().second;
            que.pop_front();
            for (int t = 0; t < 4; t++){
                u = x+dx[t]; v = y+dy[t];
                if (0<=u && u<n && 0<=v && v<m && arr[u][v]!='#'){
                    d = dis[state-'1'][x][y] + (arr[u][v]=='.');
                    if (dis[state-'1'][u][v] > d){
                        dis[state-'1'][u][v] = d;
                        if (arr[u][v]=='.') que.push_back({u, v});
                        else que.push_front({u, v});
                    }               
                }
            }
        }
    }
    int answer = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (dis[0][i][j]!=INT_MAX && dis[1][i][j]!=INT_MAX && dis[2][i][j]!=INT_MAX){
                answer = min(answer, dis[0][i][j]+dis[1][i][j]+dis[2][i][j] - 2*(arr[i][j]=='.'));
            }
        }
    }
    if (answer==INT_MAX) cout << -1; else cout << answer;
    return 0;
}