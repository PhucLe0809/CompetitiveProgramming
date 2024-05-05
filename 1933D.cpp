#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    if (inp[0] % inp[1] != 0){
        cout << "YES\n";
        return;
    }
    for (int i = 2; i < n; i++){
        if (inp[i] % inp[0] != 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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