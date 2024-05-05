#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t x; cin >> x;
    __uint128_t n = (__uint128_t)x;
    __uint128_t res = (n * (n + 1) * (2*n + 1) / 6) % (1000000007);
    uint64_t out = (uint64_t) res;
    cout << out;
}
