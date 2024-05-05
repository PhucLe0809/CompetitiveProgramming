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
        double res = 1;
        for (int i = 1; i <= n; i++) res = 1.0 / (1.0 + res);
        cout << fixed << setprecision(5) << res << endl;
    }
    return 0;
}