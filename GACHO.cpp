#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    // 2x + 2y = 2m
    // 2x + 4y = n
    // 2y = n - 2m -> y = (n - 2m) / 2;
    double temp = (n - 2*m) * 1.0 / 2;
    if (!(temp >= 0 && temp == (int)temp)) cout << -1;
    else{
        int x, y = (int)temp;
        if (m - y < 0) cout << -1;
        else{
            x = m - y;
            cout << x << " " << y;
        }
    }
    return 0;
}