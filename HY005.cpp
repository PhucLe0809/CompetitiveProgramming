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
    for (int i = 0; i < n; i++) inp.push_back(inp[i]);
    int res = LONG_MAX, sum = LONG_MAX;
    for (int i = 0; i < n; i++){
        sum = inp[i];
        res = min(res, sum);
        for (int j = i+1; j < i+n; j++){
            sum = min(sum + inp[j], inp[j]);
            res = min(res, sum);
        }
    }
    cout << res;
    return 0;
}