#include <bits/stdc++.h>
#define MOD 1000000007
#define LIM 1000005

using namespace std;
int64_t fact[LIM], invs[LIM], tcaf[LIM];

void precal(int64_t n){
    fact[0] = fact[1] = 1;
    invs[0] = invs[1] = 1;
    tcaf[0] = tcaf[1] = 1;
    for (int64_t x = 2; x <= n; x++)
    {
        /// n!      = n * (n - 1)!
        /// n^(-1)  = floor(MOD / n) * (MOD % x)^(-1)
        /// n!^(-1) = n^(-1) * (n-1)!^(-1)
        fact[x] = (1LL*x*fact[x-1]) % MOD;
        invs[x] = MOD - 1LL*(MOD/x)*invs[MOD%x] % MOD;
        tcaf[x] = (1LL*invs[x]*tcaf[x-1]) % MOD;
    }
}
int64_t nck(int64_t n, int64_t k){
    /// nCk = n! * k!^(-1) * (n-k)!^(-1)
    return 1LL*fact[n]*tcaf[k] % MOD * tcaf[n-k] % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    precal(n);
    int64_t v, res = 0;
    for (int64_t x = 0; x <= n; x++){
        v = (1LL*nck(n, x)*fact[n-x])%MOD;
        res += (x & 1) ? (-v):(+v);
        // cout << v << " " << res << '\n';
    }
    res %= MOD;
    if (res<0) res += MOD;
    cout << res;
    return 0;
}