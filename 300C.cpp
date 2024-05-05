#include <bits/stdc++.h>
#define maxarray 1000005
#define mod 1000000007

using namespace std;
int64_t fact[maxarray], invs[maxarray], tcaf[maxarray];

void preprocess(int n){
    fact[0] = fact[1] = 1;
    invs[0] = invs[1] = 1;
    tcaf[0] = tcaf[1] = 1;
    for (int64_t x = 2; x <= n; x++){
        /// n!      = n * (n - 1)!
        /// n^(-1)  = floor(MOD / n) * (MOD % x)^(-1)
        /// n!^(-1) = n^(-1) * (n-1)!^(-1)
        fact[x] = (fact[x-1] * x) % mod;
        invs[x] = (mod - (mod/x)*invs[mod%x]%mod) % mod;
        tcaf[x] = (invs[x]*tcaf[x-1]) % mod;
    }
}
int64_t nCk(int n, int k){
    return (fact[n] * tcaf[k]%mod * tcaf[n-k]%mod) % mod;
}
bool is_good(int num, int a, int b){
    while (num != 0){
        if (num%10 != a && num%10 != b) return false;
        num /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, n; cin >> a >> b >> n;
    int64_t answer = 0;
    preprocess(n);
    for (int i = 0; i <= n; i++){
        if (is_good(a*i + (n-i)*b, a, b)){
            answer = (answer + nCk(n, i)) % mod;
        }
    }
    cout << answer;
    return 0;
}