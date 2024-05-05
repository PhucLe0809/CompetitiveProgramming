#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};

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
    int chicken, fox; chicken = fox = 0;
    int c, f, x, y, u, v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j]!='c' && arr[i][j]!='f') continue;
            queue <int> qx, qy; c = f = 0;
            qx.push(i); qy.push(j);
            if (arr[i][j]=='c') c++; else f++;
            arr[i][j] = 'x';
            while (qx.size()){
                x = qx.front(); qx.pop();
                y = qy.front(); qy.pop();
                for (int t = 0; t < 4; t++){
                    u = x+dx[t]; v = y+dy[t];
                    if (0<=u && u<n && 0<=v && v<m && arr[u][v]!='#' && arr[u][v]!='x'){
                        if (arr[u][v]=='c') c++;
                        if (arr[u][v]=='f') f++;
                        arr[u][v] = 'x';
                        qx.push(u); qy.push(v);
                    }
                }
            }
            if (c>f) chicken += c; else fox += f;
        }
    }
    cout << fox << " " << chicken;
    return 0;
}