#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int dx[]={-1, 0, 1, 0};
    int dy[]={0, -1, 0, 1};
    while (test--){
        int n, m; cin >> n >> m;
        char arr[n][m];
        vector <pair<int, int>> scan;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                if (arr[i][j]=='$'){
                    scan.push_back({i, j});
                }
            }
        }
        int dis[3][n][m];
        int x, y, u, v, d;
        for (int ele = 0; ele < 2; ele++){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    dis[ele][i][j] = INT_MAX;
                }
            }
            deque <pair<int, int>> que;
            que.push_back(scan[ele]); 
            dis[ele][scan[ele].first][scan[ele].second] = 0;
            while (que.size()){
                x = que.front().first; y = que.front().second;
                que.pop_front();
                for (int t = 0; t < 4; t++){
                    u = x+dx[t]; v = y+dy[t];
                    if (0<=u && u<n && 0<=v && v<m && arr[u][v]!='*'){
                        d = dis[ele][x][y] + (arr[u][v]=='#');
                        if (dis[ele][u][v] > d){
                            dis[ele][u][v] = d;
                            if (arr[u][v]=='.') que.push_front({u, v});
                            else que.push_back({u, v});
                        }
                    }
                }
            }
        }
        for (int ele = 2; ele == 2; ele++){
            deque <pair<int, int>> que;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    if ((i==0 || i==n-1 || j==0 || j==m-1) && arr[i][j]!='*'){
                        que.push_back({i, j});
                        if (arr[i][j]=='#') dis[ele][i][j] = 1;
                        else dis[ele][i][j] = 0;
                    }else dis[ele][i][j] = INT_MAX;
                }
            }
            while (que.size()){
                x = que.front().first; y = que.front().second;
                que.pop_front();
                for (int t = 0; t < 4; t++){
                    u = x+dx[t]; v = y+dy[t];
                    if (0<=u && u<n && 0<=v && v<m && arr[u][v]!='*'){
                        d = dis[ele][x][y] + (arr[u][v]=='#');
                        if (dis[ele][u][v] > d){
                            dis[ele][u][v] = d;
                            if (arr[u][v]=='.') que.push_front({u, v});
                            else que.push_back({u, v});
                        }
                    }
                }
            }
        }
        int answer = INT_MAX;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (dis[0][i][j]!=INT_MAX && dis[1][i][j]!=INT_MAX && dis[2][i][j]!=INT_MAX){
                    answer = min(answer, dis[0][i][j]+dis[1][i][j]+dis[2][i][j] - 2*(arr[i][j]=='#'));
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}