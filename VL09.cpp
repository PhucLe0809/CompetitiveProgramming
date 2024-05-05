#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double x; int n; cin >> x >> n;
    double res = 0.0;
    double up = x; int down = 1;
    for (int i = 1; i <= n; i++){
        res += up / down;
        up *= x; down *= (i + 1);
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}