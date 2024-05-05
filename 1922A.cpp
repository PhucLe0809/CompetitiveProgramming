// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i < n && !flag; i++){
        flag = (a[i] != c[i] && b[i] != c[i]);
    }
    if (flag) cout << "YES\n"; else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}