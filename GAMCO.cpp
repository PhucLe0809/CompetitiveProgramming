#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1}; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    char arr[n][m];
    int step[n][m];
    int a, b;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            step[i][j] = 0;
            if (arr[i][j]=='C'){ a = i; b = j; }
        }
    }
    queue <int> qx, qy;
    qx.push(a); qy.push(b);
    step[a][b] = 1;
    int x, y, u, v;
    while (qx.size() && step[0][0]==0){
        x = qx.front(); qx.pop();
        y = qy.front(); qy.pop();
        for (int t = 0; t < 4; t++){
            u = x+dx[t]; v = y+dy[t];
            if (0<=u && u<n && 0<=v && v<m && arr[u][v]!='*' && step[u][v]==0){
                qx.push(u); qy.push(v);
                step[u][v] = step[x][y]+1;
            }
        }
    }
    if (step[0][0]) cout << step[0][0]-1;
    else cout << 0;
    return 0;
}