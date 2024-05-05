#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(2*n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    for (auto &it:inp) cout << it << " ";
    return 0;
}