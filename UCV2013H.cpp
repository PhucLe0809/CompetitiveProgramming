#include <bits/stdc++.h>

using namespace std;
int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    while (true){
        cin >> n >> m;
        if (n==m && n==0) break;
        int arr[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        int ele, component = 0;
        int x, y, u, v;
        map <int, int> mp;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j]!=1) continue;
                component++;
                queue <int> qx, qy;
                qx.push(i); qy.push(j);
                arr[i][j] = 2; ele = 1;
                while (qx.size()){
                    x = qx.front(); qx.pop();
                    y = qy.front(); qy.pop();
                    for (int t = 0; t < 4; t++){
                        u = x+dx[t]; v = y+dy[t];
                        if (0<=u && u<n && 0<=v && v<m && arr[u][v]==1){
                            qx.push(u); qy.push(v);
                            arr[u][v] = 2; ele++;
                        }
                    }
                }
                mp[ele]++;
            }
        }
        cout << component << '\n';
        for (auto &it:mp) cout << it.first << " " << it.second << '\n';
    }
    return 0;
}