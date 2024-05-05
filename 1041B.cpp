#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b, x, y; cin >> a >> b >> x >> y;
    int64_t gcd = __gcd(x, y);
    x /= gcd; y /= gcd;
    cout << min(a/x, b/y);
    return 0;
}