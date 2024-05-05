#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector <int> danger(m+2);
    danger[0] = 1; danger[m+1] = n;
    for (int i = 1; i <= m; i++) cin >> danger[i];
    int64_t dis[n+1][n+1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> dis[i][j];
        }
    }
    for (int k = 1; k <= n; k++){
        for (int u = 1; u <= n; u++){
            for (int v = 1; v <= n; v++){
                dis[u][v] = min(dis[u][v], dis[u][k]+dis[k][v]);
            }
        }
    }
    int64_t answer = 0;
    int u, v;
    for (int i = 0; i <= m; i++){
        u = danger[i]; v = danger[i+1];
        answer += dis[u][v];
    }
    cout << answer;
    return 0;
}