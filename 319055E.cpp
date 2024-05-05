#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n+5);
    for (int i = 3; i <= n+2; i++) cin >> inp[i];
    vector <int> dif(n+5);
    for (int i = 2; i <= n+1; i++) dif[i] = inp[i+1] - inp[i];
    for (int i = 1; i <= n; i++) dif[i] = dif[i+1] - dif[i];

    int q; cin >> q;
    while (q--){
        int l, r, d; cin >> l >> r >> d;
        // update [l, r] +d
        dif[l] += d; dif[r+1] -= d;
        // update [r-1, r-1] -(r-l+1)*d
        dif[r+1] -= (r-l+1)*d; dif[r+2] += (r-l+1)*d;
    }
    for (int i = 1; i <= n; i++) dif[i] += dif[i-1];
    for (int i = 1; i <= n; i++){
        dif[i] += dif[i-1];
        cout << dif[i] << " ";
    }
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