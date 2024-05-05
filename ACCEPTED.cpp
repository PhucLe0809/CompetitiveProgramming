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
    sort(inp.begin(), inp.end());
    int sum = accumulate(inp.begin(), inp.end(), 0);
    int tem = accumulate(inp.begin(), inp.begin() + n/2, 0);
    cout << sum - 2 * tem;
    return 0;
}