#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int dy[]={0, -1, -1, -1, 0, 1, 1, 1};
int chess[1005][1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> bx >> by >> ax >> ay >> cx >> cy;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            chess[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++) chess[i][by] = chess[bx][i] = 1;
    for (int i = 1; i <= n; i++){
        if (1<=bx-i && 1<=by-i) chess[bx-i][by-i] = 1;
        if (bx+i<=n && by+i<=n) chess[bx+i][by+i] = 1;
        if (bx+i<=n && 1<=by-i) chess[bx+i][by-i] = 1;
        if (1<=bx-i && by+i<=n) chess[bx-i][by+i] = 1;
    }
    queue <pair<int, int>> q;
    q.push({ax, ay}); chess[ax][ay] = 2;
    int x, y;
    while (!q.empty() && chess[cx][cy]!=2){
        auto it = q.front(); q.pop();
        for (int t = 0; t < 8; t++){
            x=it.first+dx[t]; y=it.second+dy[t];
            if (1<=x && x<=n && 1<=y && y<=n && chess[x][y]==0){
                q.push({x, y}); chess[x][y] = 2;
            }
        }
    }
    if (chess[cx][cy]==2) cout << "YES\n";
    else cout << "NO\n"; 
    return 0;
}