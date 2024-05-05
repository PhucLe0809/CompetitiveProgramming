#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int power_mod(int a, int b, int mod){
    if (b == 1) return a;
    int half = power_mod(a, b/2, mod) % mod;
    if (b % 2 == 0) return (half * half) % mod;
    else return (((half * half) % mod) * (a % mod)) % mod;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    if (n == 0) cout << 1;
    else cout << power_mod(2, n, 10);
    return 0;
}