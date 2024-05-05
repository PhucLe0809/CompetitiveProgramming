#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    vector <int> dif(n+2);
    while (q--){
        int l, r; cin >> l >> r;
        dif[l]++; dif[r+1]--;
    }

    for (int i = 1; i <= n; i++){
        dif[i] += dif[i-1];
        // cout << dif[i] << " ";
    }
    sort(inp.begin() + 1, inp.begin() + n+1);
    sort(dif.begin() + 1, dif.begin() + n+1);
    int res = 0;
    for (int i = 1; i <= n; i++) res += inp[i] * dif[i];
    
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}