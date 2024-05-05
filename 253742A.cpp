#include <bits/stdc++.h>
#define endl '\n'
#define maxarray 505
#define inf 1000000007

using namespace std;
int inp[maxarray][maxarray], scan[maxarray][maxarray];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    int s = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char key; cin >> key;
            if (key == '.'){
                inp[i][j] = 0; 
                s++;
            }else inp[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < m; j++){
            if (inp[i][j] == 1) continue;
            for (int u = 0; u < n; u++){
                for (int v = 0; v < m; v++){
                    scan[u][v] = inp[u][v];
                }
            }
            queue <pair<int, int>> que;
            que.push({i, j}); scan[i][j] = 2;
            int cnt = 1;
            while (que.size() && cnt < s - k){
                auto it = que.front(); que.pop();
                int u = it.first;
                int v = it.second;
                for (int t = 0; t < 4 && cnt < s - k; t++){
                    int x = u + dx[t];
                    int y = v + dy[t];
                    if (0 <= x && x < n && 0 <= y && y < m && scan[x][y] == 0){
                        scan[x][y] = 2;
                        que.push({x, y});
                        cnt++;
                    }
                }
            }
            if (cnt >= s - k){
                for (int u = 0; u < n; u++){
                    for (int v = 0; v < m; v++){
                        if (scan[u][v] == 0) cout << 'X';
                        if (scan[u][v] == 1) cout << '#';
                        if (scan[u][v] == 2) cout << '.';
                    }
                    cout << endl;
                }
                return 0;
            }
        }
    }
    return 0;
}