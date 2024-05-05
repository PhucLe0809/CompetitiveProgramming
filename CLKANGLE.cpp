#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double h, m; cin >> h >> m;
    double calc = (max(h, m/5) - min(h, m/5)) * 5 * 6;
    if (calc > 180) calc = 360 - calc;
    cout << fixed << setprecision(1) << calc;
    return 0;
}