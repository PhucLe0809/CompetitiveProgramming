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
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int key = inp[i] + inp[j];
            int pos = lower_bound(inp.begin() + j+1, inp.end(), key) - inp.begin();
            res += (pos - j - 1);
        }
    }
    cout << res;
    return 0;
}