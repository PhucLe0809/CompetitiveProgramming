#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int res = -1, cnt = 1; inp.push_back(inp.back());
    for (int i = 1; i <= n; i++){
        if (inp[i] * inp[i-1] < 0) cnt++;
        else{
            res = max(res, cnt); cnt = 1;
        }
    }
    if (res == 1) cout << -1; else cout << res;
    return 0;
}