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
    vector <int> scan(n); scan[0] = inp[0];
    for (int i = 1; i < n; i++) scan[i] = min(scan[i-1], inp[i]);
    int q; cin >> q;
    while (q--){
        int k; cin >> k;
        int l = 0, r = n-1;
        while (l <= r){
            int mid = (l + r) / 2;
            if (scan[mid] <= k) r = mid - 1;
            else l = mid + 1;
        }
        cout << l+1 << endl;
    }
    return 0;
}