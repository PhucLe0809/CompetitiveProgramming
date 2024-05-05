#include <bits/stdc++.h>

using namespace std;

__int128 power_bina(__int128 a, __int128 m, __int128 n){
    if (m == 1) return a;
    __int128 half = power_bina(a, m/2, n) % n;
    if (m % 2 == 0) return (half * half) % n;
    else return ((half * half)%n * (a%n)) % n;
}
bool is_prime(int64_t a, int64_t n, int64_t m, int64_t k){
    __int128 mod = power_bina(a, m, n);
    if (mod == 1 || mod == n-1) return true;
    for (int l = 1; l < k; l++){
        mod = (mod * mod) % n;
        if (mod == n-1) return true;
    }
    return false;
}
bool rabin_miller(int64_t n){
    if (n==2 || n==3 || n==5 || n==7) return true;
    if (n < 11) return false;
    int64_t k = 0, m = n-1;
    while (m % 2 == 0){
        m /= 2; k++;
    }
    vector <int64_t> repeat = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (auto &it:repeat){
        if (!is_prime(it, n, m, k)) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        if (rabin_miller(n)) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}