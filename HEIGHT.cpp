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
    vector <int> scan = inp;
    sort(scan.begin(), scan.end());
    for (auto &it:inp) cout << lower_bound(scan.begin(), scan.end(), it) - scan.begin() << " ";
    return 0;
}