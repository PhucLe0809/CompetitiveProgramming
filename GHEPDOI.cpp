#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    vector <int> scan(n); cin >> scan[0];
    for (int i = 1; i < n; i++){
        int x; cin >> x; scan[i] = max(scan[i-1], x);
    }
    while (q--){
        int m; cin >> m;
        cout << scan[--m] << endl;
    }
    return 0;
}