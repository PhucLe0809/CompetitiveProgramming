#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 998244353

using namespace std;

int calc(int num){
    return (num * (num + 1) / 2) % mod;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int a, b, c; cin >> a >> b >> c;
        int x = calc(a), y = calc(b), z = calc(c);
        cout << (((x * y) % mod) * z) % mod << endl;
    }
    return 0;
}