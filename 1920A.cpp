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
    int one = LLONG_MIN;
    int two = LLONG_MAX;
    vector <int> inp;
    for (int i = 0; i < n; i++){
        int a, x; cin >> a >> x;
        switch (a){
            case 1: one = max(one, x); break;
            case 2: two = min(two, x); break;
            case 3: inp.push_back(x);
        }
    }
    int three = 0;
    for (auto &it:inp) three += (it >= one && it <= two);
    cout << max((two - one + 1) - three, 0LL) << endl;
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