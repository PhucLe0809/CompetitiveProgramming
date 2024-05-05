#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n, k, x; cin >> n >> k >> x;
        if (x > n*(n+1)/2){
            cout << "NO\n"; continue;
        }
        int64_t one = (-1 + int64_t(sqrt(1 + 8*x)))/2;
        if (one*(one+1)/2 < x) one++;
        if (one*(one+1)/2 > x) one--;
        int64_t two = (1 + int64_t(sqrt(1+4*(n*n + n - 2*x))))/2;
        two = (n - two + 1);
        if (two <= k && k <= one) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}