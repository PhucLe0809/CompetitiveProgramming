#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> inp(3);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    cout << max(inp[2] - (inp[1] + inp[0]) + 1, 0LL);
    return 0;
}