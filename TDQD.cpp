#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t dx[9]={-2, -1, 1, 2, 2, 1, -1, -2};
int32_t dy[9]={-1, -2, -2, -1, 1, 2, 2, 1};
int32_t matrix[maxarray][maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t e, k, n; cin >> e >> k >> n;
    for (int i = 1; i <= e; i++){
        fill(matrix[i]+1, matrix[i]+e+1, 0);
    }
    int32_t x, y;
    for (int i = 0; i < k; i++){
        cin >> x >> y;
        matrix[x][y]=1;
    }
    int32_t cnt = 0;
    int32_t u, v;
    while (n--){
        cin >> x >> y;
        if (matrix[x][y]==1){
            cnt++; matrix[x][y]=0;
        }
        for (int t = 0; t < 8; t++){
            u = x+dx[t]; v = y+dy[t];
            if (1<=u && u<=e && 1<=v && v<=e){
                if (matrix[u][v]==1){
                    cnt++;
                    matrix[u][v]=0;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}