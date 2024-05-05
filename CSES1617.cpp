#include <bits/stdc++.h>

using namespace std;

int64_t forces(int64_t a, int64_t n, int64_t mod){
    if (n == 1) return a;
    int64_t half = forces(a, n/2, mod) % mod;
    if (n & 1) return (((half*half) % mod) * a) % mod;
    else return (half * half) % mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    cout << forces(2, n, 1000000007);
    return 0;
}