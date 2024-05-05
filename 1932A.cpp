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
    string str; cin >> str;
    int res = 0, trap = 0; str += '.';
    for (int i = 0; i <= n; i++){
        if (str[i] == '*'){
            trap++;
            if (trap > 1) break;
        }else{
            trap = 0;
            res += (int)(str[i] == '@');
        }
    }
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