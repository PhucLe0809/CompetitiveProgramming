#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int dy[]={0, -1, -1, -1, 0, 1, 1, 1};

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
    int lake = 0;
    int x, y, u, v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j]!='W') continue;
            lake++;
            queue <int> qx, qy;
            qx.push(i); qy.push(j);
            arr[i][j] = 'A';
            while (qx.size()){
                x = qx.front(); qx.pop();
                y = qy.front(); qy.pop();
                for (int t = 0; t < 8; t++){
                    u = x+dx[t]; v = y+dy[t];
                    if (0<=u && u<n && 0<=v && v<m && arr[u][v]=='W'){
                        qx.push(u); qy.push(v);
                        arr[u][v] = 'A';
                    }
                }
            }
        }
    }
    cout << lake;
    return 0;
}