#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, -1, -1, -1, 0, 1, 1, 1};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    vector <vector<int>> mine(n+5, vector<int>(n+5));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mine[i][j];
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mine[i][j] != 0) continue;
            int cnt = 0;
            for (int t = 0; t < 8; t++){
                int x = i + dx[t];
                int y = j + dy[t];
                if (x >= 0 && x < n && y >= 0 && y < n){
                    cnt += mine[x][y];
                }
            }
            res += (cnt > k);
        }
    }
    cout << res << endl;

    return 0;
}