#include <bits/stdc++.h>

using namespace std; 
char inp[55][55];
queue <int32_t> qx, qy;
int32_t dx[5]={-1, 0, 1, 0};
int32_t dy[5]={0, -1, 0, 1};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x, y, u, v;
    bool check;
    while (test--){
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> inp[i][j];
                if (inp[i][j]!='.'){
                    qx.push(i); qy.push(j);
                }
            }
        }
        if (qx.empty()){
            inp[0][0] = 'R';
            qx.push(0); qy.push(0);
        }
        while (qx.size()){
            x = qx.front(); qx.pop();
            y = qy.front(); qy.pop();
            for (int t = 0; t < 4; t++){
                u = x+dx[t]; v = y+dy[t];
                if (0<=u && u<n && 0<=v && v<m && inp[u][v]=='.'){
                    if (inp[x][y]=='R') inp[u][v]='W';
                    else inp[u][v]='R';
                    qx.push(u); qy.push(v);
                }
            }
        }
        check = true;
        for (int i = 0; i<n && check; i++){
            for (int j = 0; j<m && check; j++){
                for (int t = 0; t<4 && check; t++){
                    u = i+dx[t]; v = j+dy[t];
                    if (0<=u && u<n && 0<=v && v<m){
                        if (inp[i][j]==inp[u][v]) check = false;
                    }
                }
            }
        }
        if (!check) cout << "NO\n";
        else{
            cout << "YES\n";
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++) cout << inp[i][j];
                cout << '\n';
            }       
        }
    }
    return 0;
}