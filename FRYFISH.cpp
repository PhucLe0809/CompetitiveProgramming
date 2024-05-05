#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    if (n == 1){
        cout << 2; return 0;
    }
    int res = (n / k) * 2; n %= k;
    if (n != 0){
        if (n <= k/2) res += 1;
        else res += 2;
    }
    cout << res;
    return 0;
}