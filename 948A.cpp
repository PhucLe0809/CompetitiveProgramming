#include <bits/stdc++.h>

using namespace std; 
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};
char pasture[505][505];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> pasture[i][j];
        }
    }
    bool check = true;
    int x, y;
    for (int i = 1; i<=n && check; i++){
        for (int j = 1; j<=m && check; j++){
            if (pasture[i][j]!='S') continue;
            for (int t = 0; t<4 && check; t++){
                x = i+dx[t]; y = j+dy[t];
                if (1<=x && x<=n && 1<=y && y<=m){
                    if (pasture[x][y]=='W') check = false;
                    if (pasture[x][y]=='.') pasture[x][y] = 'D';
                }
            }
        }
    }
    if (!check) cout << "No\n";
    else{
        cout << "Yes\n";
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cout << pasture[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}