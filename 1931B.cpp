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
    vector <int> inp(n);
    int total = 0;
    for (auto &it:inp){
        cin >> it;
        total += it;
    }
    int avg = total / n;
    int water = 0;
    for (int i = 0; i < n && water >= 0; i++){
        water += max(inp[i] - avg, 0LL);
        water += min(inp[i] - avg, 0LL);
    }
    if (water >= 0) cout << "YES\n"; else cout << "NO\n";
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