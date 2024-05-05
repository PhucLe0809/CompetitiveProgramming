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
        cout << (int)(binary_search(inp.begin(), inp.end(), x));
    }
    return 0;
}