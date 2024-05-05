#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int power(int a, int n, int m){
    if (n == 0) return 1;
    if (n == 1) return a;
    int out = 1;
    while (n){
        if (n % 2 == 1) out = ((out % m) * (a % m)) % m;
        a = ((a % m) * (a % m)) % m;
        n /= 2;
    }
    return out;
}
int calc(int a, int b, int c, int m){
    int x = power(b, c, m-1);
    return power(a, x, m);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, q; cin >> n >> m >> q;
    int a, b, c; cin >> a >> b >> c;
    int x = calc(a, b, c, m);
    int y = calc(c, a, b, m);
    int z = calc(b, c, a, m);
    // cout << x << " " << y << " " << z << endl;
    vector <int> prefix(n+1); prefix[0] = z;
    for (int i = 1; i <= n; i++){
        int num;
        if (i % 3 == 1) num = x;
        if (i % 3 == 2) num = y;
        if (i % 3 == 0) num = z;
        prefix[i] = prefix[i-1] + num;
    }
    while (q--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
    return 0;
}