#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    vector <vector<int>> inp(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            char key; cin >> key;
            inp[i][j] = (key == '*');
        }
    }
    vector <vector<int>> prefix(n+1, vector<int>(n+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + inp[i][j];
        }
    }
    while (q--){
        int x, y, z, t; cin >> x >> y >> z >> t;
        cout << prefix[z][t] - prefix[x-1][t] - prefix[z][y-1] + prefix[x-1][y-1] << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}