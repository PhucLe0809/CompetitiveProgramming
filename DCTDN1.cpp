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
    vector <int> scan(n);
    int res = 1;
    for (int i = 0; i < n; i++){
        scan[i] = 1;
        for (int j = 0; j < i; j++){
            if (inp[j] < inp[i]) scan[i] = max(scan[i], scan[j]+1);
        }
        res = max(res, scan[i]);
    }
    cout << res;
    return 0;
}