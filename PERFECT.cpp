#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];

    sort(inp.begin(), inp.end());

    int res = inf;
    for (int i = 0; i < n-1; i++) res = min(res, inp[i+1] - inp[i]);
    cout << res << endl;

    return 0;
}