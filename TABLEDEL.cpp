#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    set <int> row, col;
    for (int i = 0; i < k; i++){
        int x, y; cin >> x >> y;
        row.insert(x); col.insert(y);
    }
    cout << ((int)row.size()) * ((int)col.size());
    return 0;
}