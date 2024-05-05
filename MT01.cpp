#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int x; cin >> x; cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}