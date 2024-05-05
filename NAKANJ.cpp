#include <bits/stdc++.h>

using namespace std;
int dx[]={-2, -1, 1, 2, 2, 1, -1, -2};
int dy[]={-1, -2, -2, -1, 1, 2, 2, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string s, t;
    while (test--){
        cin >> s >> t;
        int arr[8][8];
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                arr[i][j] = -1;
            }
        }
        int xs = s[0]-'a', ys = s[1]-'1';
        int xt = t[0]-'a', yt = t[1]-'1';
        // cout << xs << ys << xt << yt << endl;
        queue <int> qx, qy; 
        qx.push(xs); qy.push(ys);
        arr[xs][ys] = 0;
        int x, y, u, v;
        while (arr[xt][yt]==-1){
            x = qx.front(); qx.pop();
            y = qy.front(); qy.pop();
            for (int t = 0; t < 8; t++){
                u = x+dx[t]; v = y+dy[t];
                if (0<=u && u<8 && 0<=v && v<8 && arr[u][v]==-1){
                    qx.push(u); qy.push(v);
                    arr[u][v] = arr[x][y]+1;
                }
            }
        }
        cout << arr[xt][yt] << '\n';
    }
    return 0;
}