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
    vector <int> scan(n+1);
    int res = 1; scan[1] = inp[0];
    for (int i = 1; i < n; i++){
        int pos = lower_bound(scan.begin() + 1, scan.begin() + res+1, inp[i]) - scan.begin();
        res = max(res, pos); scan[pos] = inp[i];
    }
    cout << res;
    return 0;
}