#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    int res = n;
    while (n >= k){
        res += n/k;
        n = n / k + n % k;
    }
    cout << res;
    return 0;
}