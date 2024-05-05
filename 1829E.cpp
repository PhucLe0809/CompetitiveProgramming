#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int arr[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int dx[]={-1, 0, 1, 0};
    int dy[]={0, -1, 0, 1};
    while (test--){
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        int temp, x, y, answer = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j] <= 0) continue;
                queue <pair<int, int>> que;
                que.push({i, j}); temp = arr[i][j]; arr[i][j] = -1;
                while (que.size()){
                    auto it = que.front(); que.pop();
                    for (int t = 0; t < 4; t++){
                        x = it.first+dx[t]; y = it.second+dy[t];
                        if (0<=x && x<n && 0<=y && y<m && arr[x][y]>0){
                            que.push({x, y});
                            temp += arr[x][y];
                            arr[x][y] = -1;
                        }
                    }
                }
                answer = max(answer, temp);
            }
        }
        cout << answer << '\n';
    }
    return 0;
}