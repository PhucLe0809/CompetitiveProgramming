#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007

using namespace std;

int calc_power(int a, int b, int m){
    if (b == 1) return a;
    int half = calc_power(a, b/2, m) % m;
    if (b % 2 == 0) return (half * half) % m;
    else return (((half * half) % m) * (a % m)) % m;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cout << (calc_power(2, n, mod) - 1) % mod;
    return 0;
}