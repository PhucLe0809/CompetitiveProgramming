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
    if (n % 2 != 0){
        cout << "NO\n"; return;
    }
    cout << "YES\n";
    string res = "";
    for (int i = 0; i < n/2; i++) res += "AAB";
    cout << res << endl;
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