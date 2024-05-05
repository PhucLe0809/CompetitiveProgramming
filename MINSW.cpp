#include <bits/stdc++.h>

using namespace std;
int32_t arr[105][105];
int32_t dx[9]={-1, -1, 0, 1, 1, 1, 0, -1};
int32_t dy[9]={0, -1, -1, -1, 0, 1, 1, 1}; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];
    }
    int32_t u, v;
    int32_t answer, cnt; answer = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cnt = 0;
            for (int t = 0; t < 8; t++){
                u = i+dx[t]; v = j+dy[t];
                if (1<=u && u<=n && 1<=v && v<=n && arr[u][v]==1 && arr[u][v]!=1){
                    cnt++;
                }
            }
            if (cnt > k) answer++;
        }
    }
    cout << answer;
    return 0;
}