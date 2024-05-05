#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    vector <int> inp(n+1);
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        prefix[i] = prefix[i-1] + inp[i];
    }
    vector <int> scan(n+1);
    for (int i = 1; i <= n; i++){
        scan[i] = scan[i-1] + prefix[i-1] * inp[i];
    }
    // for (auto &it:scan) cout << it << " "; cout << endl;
    while (q--){
        int l, r; cin >> l >> r;
        cout << scan[r] - scan[l] - (prefix[r] - prefix[l]) * prefix[l-1] << endl;
    }
    return 0;
}