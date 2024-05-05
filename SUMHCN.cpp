#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int m, n, test;
    while (cin >> m >> n >> test){
        vector <vector<int>> inp(m+1, vector<int>(n+1));
        vector <vector<int>> prefix(m+1, vector<int>(n+1));
        for (int i = 1; i <= m; i++){
            for (int j = 1; j <= n; j++){
                cin >> inp[i][j];
            }
        }
        for (int i = 1; i <= m; i++){
            for (int j = 1; j <= n; j++){
                prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + inp[i][j];
            }
        }
        int x, y, z, t;
        while (test--){
            cin >> x >> y >> z >> t;
            cout << prefix[z][t] - prefix[z][y-1] - prefix[x-1][t] + prefix[x-1][y-1] << '\n';
        }
    }
    return 0;
}