#include <bits/stdc++.h>

using namespace std; 
int32_t dx[9]={-1, -1, 0, 1, 1, 1, 0, -1};
int32_t dy[9]={0, -1, -1, -1, 0, 1, 1, 1};
int64_t inp[505][505];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> inp[i][j];
        }
    }
    int64_t sum = 0;
    int32_t cnt, ele = 0;
    int32_t u, v;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cnt = 0;
            set <int64_t> st;
            for (int t = 0; t < 8; t++){
                u = i+dx[t]; v = j+dy[t];
                if (1<=u && u<=n && 1<=v && v<=m){
                    cnt++; st.insert(inp[u][v]);
                }
            }
            if (st.size()==cnt){
                ele++; sum += inp[i][j];
            }
        }
    }
    // cout << sum << endl;
    if (ele==0) cout << -1;
    else cout << sum/int64_t(ele);
    return 0;
}