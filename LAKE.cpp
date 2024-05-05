#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n, k; cin >> m >> n >> k;
    int lake[m+1][n+1];
    memset(lake, 0, sizeof(lake));
    for (int i = 0; i < k; i++){
        int x, y; cin >> x >> y;
        lake[x][y] = 1;
    }
    int res = 0;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (lake[i][j] != 1) continue;
            int cnt = 1;
            queue <pair<int, int>> que;
            que.push({i, j}); lake[i][j] = 2;
            while (que.size()){
                auto it = que.front(); que.pop();
                for (int t = 0; t < 4; t++){
                    int x = it.first + dx[t];
                    int y = it.second + dy[t];
                    if (1 <= x && x <= m && 1 <= y && y <= n && lake[x][y] == 1){
                        que.push({x, y});
                        lake[x][y] = 2;
                        cnt++;
                    }
                }
            }
            res = max(res, cnt);
        }
    }
    cout << res;
    return 0;
}