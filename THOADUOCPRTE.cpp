#include <bits/stdc++.h>

using namespace std; 
int32_t dx[9]={-1, -1, 0, 1, 1, 1, 0, -1};
int32_t dy[9]={0, -1, -1, -1, 0, 1, 1, 1};
int32_t inp[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t m, n, k; cin >> m >> n >> k;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++) cin >> inp[i][j];
    }
    int32_t answer = 0;
    int32_t res, cnt, u, v;
    double a, b;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            res = cnt = 0;
            for (int t = 0; t < 8; t++){
                u=i+dx[t]; v=j+dy[t];
                if (1<=u && u<=m && 1<=v && v<=n){
                    cnt++; res += inp[u][v];
                }
            }
            a = max(inp[i][j]*1.0, res*1.0/cnt);
            b = min(inp[i][j]*1.0, res*1.0/cnt);
            if (a-b < k*1.0) answer++;
        }
    }
    cout << answer;
    return 0;
}