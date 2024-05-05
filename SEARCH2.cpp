#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        int pos = lower_bound(inp.begin(), inp.end(), x) - inp.begin();
        if (pos == n || inp[pos] != x) cout << 0 << " "; else cout << pos + 1 << " ";
    }
    return 0;
}