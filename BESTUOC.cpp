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
    if (n == 1){
        cout << (int)(1e9); return 0;
    }
    if (n == 2){
        cout << max(inp[0], inp[1]); return 0;
    }
    vector <int> left(n); left[0] = inp[0];
    for (int i = 1; i < n; i++){
        left[i] = __gcd(left[i-1], inp[i]);
    }
    vector <int> right(n); right[n-1] = inp[n-1];
    for (int i = n-2; i >= 0; i--){
        right[i] = __gcd(right[i+1], inp[i]);
    }
    int res = max(right[1], left[n-2]);
    for (int i = 1; i < n-1; i++){
        res = max(res, __gcd(left[i-1], right[i+1]));
    }
    cout << res;
    return 0;
}