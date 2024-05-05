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
    int m; cin >> m;
    int sum = 0;
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        auto it = lower_bound(inp.begin(), inp.end(), x);
        if (it != inp.end() && *it == x) sum += (int)(it - inp.begin() + 1);
        else sum += -1;
    }
    sum %= 30;
    cout << (int)(floor(pow(2, sum)));
    return 0;
}