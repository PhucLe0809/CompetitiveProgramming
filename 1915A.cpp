#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if (a == b) cout << c;
    if (a == c) cout << b;
    if (b == c) cout << a;
    cout << endl;   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}