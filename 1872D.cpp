#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n, x, y; cin >> n >> x >> y;
        int64_t a = n/x;
        int64_t b = n/y;
        int64_t bcnn = (x*y)/__gcd(x, y);
        a -= n/bcnn; b -= n/bcnn;
        b = b*(b+1)/2;
        a = a*(n + n-a+1)/2;
        cout << a - b << '\n';
    }
    return 0;
}