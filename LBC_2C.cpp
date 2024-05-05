#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <int> diff(n+1);
    while (m--){
        int l, r; cin >> l >> r;
        if (l <= r){
            diff[l-1]++; diff[r]--;
        }else{
            diff[0]++; diff[r]--;
            diff[l-1]++; diff[n]--;
        }
    }
    int res = diff[0], sum = diff[0];
    for (int i = 1; i < n; i++) sum += diff[i], res = max(res, sum);
    cout << res;
    return 0;
}