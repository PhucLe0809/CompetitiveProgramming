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
    int res = LONG_MIN;
    for (int i = 1; i < n-1; i++) res = max(res, inp[i+1] - inp[i-1]);
    cout << res;
    return 0;
}