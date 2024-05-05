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
    int up = *max_element(inp.begin(), inp.end());
    int down = *min_element(inp.begin(), inp.end());
    cout << up - down;
    return 0;
}