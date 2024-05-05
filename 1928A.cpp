// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int a, b; cin >> a >> b;
    if (a % 2 != 0 && b % 2 != 0){
        cout << "No\n";
        return;
    }
    if (b % 2 == 0){
        if (b / 2 != a){
            cout << "Yes\n";
        }else{
            if (a % 2 == 0) cout << "Yes\n";
            else cout << "No\n";
        }
        return;
    }
    if (a % 2 == 0){
        if (a / 2 != b){
            cout << "Yes\n";
        }else{
            if (b % 2 == 0) cout << "Yes\n";
            else cout << "No\n";
        }
    }
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