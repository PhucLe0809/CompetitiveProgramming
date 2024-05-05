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
    sort(inp.begin(), inp.end(), greater<>());
    int res = 0;
    int i = 0;
    while (i + 2 < n){
        res += (inp[i] + inp[i+1]);
        i += 3;
    }
    while (i < n) res += inp[i], i++;
    cout << res;
    return 0;
}