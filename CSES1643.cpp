#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int res = LLONG_MIN;
    int minn = 0, prefix = 0;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        prefix += x;
        res = max(res, prefix - minn);
        minn = min(minn, prefix);
    }

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