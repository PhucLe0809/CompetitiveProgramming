#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n, m; cin >> n >> m;
        if (m*(m+1)/2 > n) cout << -1 << endl;
        else cout << (int)floor(2.0*n / (m*(m+1))) << endl;
    }
    return 0;
}