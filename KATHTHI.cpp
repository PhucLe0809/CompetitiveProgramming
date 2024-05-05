#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m;
    while (test--){
        cin >> n >> m;
        char arr[n][m];
        int dis[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
                dis[i][j] = INT_MAX;
            }
        }
        deque <int> qx, qy;
        qx.push_back(0); qy.push_back(0); dis[0][0] = 0;
        int x, y, u, v; 
        while (qx.size()){
            x = qx.front(); qx.pop_front();
            y = qy.front(); qy.pop_front();
            for (int t = 0; t < 4; t++){
                u = x+dx[t]; v = y+dy[t];
                if (0<=u && u<n && 0<=v && v<m){
                    if (dis[u][v] > dis[x][y]+(arr[x][y]!=arr[u][v])){
                        dis[u][v] = dis[x][y]+(arr[x][y]!=arr[u][v]);
                        if (arr[x][y]!=arr[u][v]){
                            qx.push_back(u); qy.push_back(v);
                        }else{
                            qx.push_front(u); qy.push_front(v);
                        }
                    }
                }
            }
        }
        cout << dis[n-1][m-1] << '\n';
    }
    return 0;
}