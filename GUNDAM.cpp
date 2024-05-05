#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    int grid[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            char key; cin >> key;
            grid[i][j] = (int)(key == '#');
        }
    }
    int res = 0;
    for (int i = 0; i < m; i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            if (grid[i][j] == 0) cnt++;
            else res += max(cnt - 1, 0LL), cnt = 0;
        }
        res += max(cnt - 1, 0LL);
    }
    for (int j = 0; j < n; j++){
        int cnt = 0;
        for (int i = 0; i < m; i++){
            if (grid[i][j] == 0) cnt++;
            else res += max(cnt - 1, 0LL), cnt = 0;
        }
        res += max(cnt - 1, 0LL);
    }
    cout << res;
    return 0;
}