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

    for (int i = 1; i < 27; i++){
        for (int j = 1; j < 27; j++){
            for (int k = 1; k < 27; k++){
                if (i + j + k == n){
                    cout << (char)(97 + i - 1) << (char)(97 + j - 1) << (char)(97 + k - 1) << endl;
                    return;
                }
            }
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