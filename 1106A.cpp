#include <bits/stdc++.h>

using namespace std; 
char inp[505][505];
queue <int32_t> qx, qy;
int32_t dx[5]={-1, 1, 1, -1};
int32_t dy[5]={-1, -1, 1, 1};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, m, cnt, x, y, u, v;
    bool check;
    while (test--){
        cin >> n; m = n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> inp[i][j];
                if (inp[i][j]=='X'){
                    qx.push(i); qy.push(j);
                }
            }
        }
        cnt = 0;
        while (qx.size()){
            x = qx.front(); qx.pop();
            y = qy.front(); qy.pop();
            check = true;
            for (int t = 0; t<4 && check; t++){
                u = x+dx[t]; v = y+dy[t];
                if (0<=u && u<n && 0<=v && v<m){
                    if (inp[u][v]!='X') check = false;
                } else check = false;
            }
            if (check) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}