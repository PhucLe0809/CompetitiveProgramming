#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int res = 1;
        for (int i = 2; i*i <= n; i++){
            while (n % i == 0){
                n /= i; res = max(res, i);
            }
        }
        if (n > 1) res = max(res, n);
        cout << res << endl; 
    }
    return 0;
}