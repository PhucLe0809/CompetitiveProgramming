#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double res = 0.0;
    for (int i = 1; i <= n; i++){
        res += 1.0 / (i * (i+1));
    }
    cout << fixed << setprecision(5) << res;
    return 0;
}