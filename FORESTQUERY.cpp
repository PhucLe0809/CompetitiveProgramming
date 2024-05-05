#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
vector <vector<int>> inp(maxarray, vector <int> (maxarray, 0));
vector <vector<int>> prefix(maxarray, vector <int> (maxarray, 0));

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    char key;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> key;
            if (key == '*') inp[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + inp[i][j];
        }
    }
    int x, y, z, t;
    while (q--){
        cin >> x >> y >> z >> t;
        cout << prefix[z][t] - prefix[z][y-1] - prefix[x-1][t] + prefix[x-1][y-1] << '\n';
    }
    return 0;
}