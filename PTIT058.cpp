#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    char scan[2*n + 5][2*n + 5];
    memset(scan, ' ', sizeof(scan));
    for (int i = 1; i <= n; i++) scan[i][1] = '*';
    for (int i = n; i < 2*n; i++) scan[i][2*n - 1] = '*';
    for (int j = 1; j < 2*n; j++) scan[n][j] = '*';
    for (int i = 2; i <= n; i++) scan[i][i] = '*';
    for (int i = n; i < 2*n; i++) scan[i][i] = '*';
    for (int i = 1; i < 2*n; i++){
        for (int j = 1; j < 2*n; j++){
            cout << scan[i][j];
        }
        cout << endl;
    }
    return 0;
}