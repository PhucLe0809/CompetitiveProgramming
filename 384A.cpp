#include <bits/stdc++.h>

using namespace std; 
char out[1005][1005];
int32_t dx[5]={-1, 0, 1, 0};
int32_t dy[5]={0, -1, 0, 1};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i <= n+1; i++){
        fill(out[i], out[i]+n+2, '.');
    }
    int32_t u, v; bool check;
    int32_t horse = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            check = true;
            for (int t = 0; t < 4 && check; t++){
                u = i+dx[t]; v = j+dy[t];
                if (1<=u && u<=n && 1<=v && v<=n){
                    if (out[u][v]=='C') check = false;
                }
            }
            if (check){
                out[i][j] = 'C'; horse++;
            }
        }
    }
    cout << horse << '\n';
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cout << out[i][j];
        cout << '\n';
    }
    return 0;
}