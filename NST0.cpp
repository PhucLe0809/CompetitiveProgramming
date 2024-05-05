#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> prefix(n+1);
    vector <int> scan(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + x;
        scan[i] = min(scan[i-1], prefix[i]);
    }
    int len = 0;
    for (int i = 1; i <= n; i++){
        int k = prefix[i];
        int l = 0, r = i-1;
        while (l <= r){
            int mid = (l + r) / 2;
            if (scan[mid] <= k) r = mid - 1;
            else l = mid + 1;
        }
        len = max(len, i - l);
        // cout << l << " " << i << endl;
    }
    if (len == 0) cout << -1; else cout << len;
    return 0;
}