#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int calc_power(int a, int b, int m){
    if (b == 0) return 1 % m;
    if (b == 1) return a % m;
    int half = calc_power(a, b / 2, m) % m;
    int out = (half * half) % m;
    if (b % 2 == 0) return out;
    else return (out * (a % m)) % m;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, n; cin >> a >> n;
    cout << calc_power(a, n, 10);
    return 0;
}