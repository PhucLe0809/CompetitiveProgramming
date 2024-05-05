#include <bits/stdc++.h>

using namespace std;

void GOTOHANOI(){
    int64_t a, b, c; cin >> a >> b >> c;
    double m = (sqrt(a) / sqrt(c)) * sqrt(b);
    double n = (sqrt(a) / sqrt(b)) * sqrt(c);
    double k = (sqrt(b) / sqrt(a)) * sqrt(c);
    // cout << m << " " << n << " " << k << endl;
    cout << (4 * (int64_t)round(m + n + k)) % 1000000007;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
}