#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    if (n == 1){
        cout << 10; return 0;
    }
    int res =  (n / k) * 10;
    if (n % k != 0){
        if (n % k <= k/2) res += 5; else res += 10;
    }
    cout << res;
    return 0;
}