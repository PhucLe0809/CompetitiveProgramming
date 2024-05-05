#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;

    int prefix = 0;
    vector <int> mleft(n+1), inp(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        prefix += inp[i];
        (i == 1) ? (mleft[i] = inp[i]) : (mleft[i] = min(mleft[i-1], prefix));
    }

    vector <int> mright(n+1), suffix(n+1);
    mright[n] = suffix[n] = inp[n];
    for (int i = n - 1; i > 0; i--){
        suffix[i] = suffix[i+1] + inp[i];
        mright[i] = min(mright[i+1] + inp[i], inp[i]);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += (mright[i] > 0 && suffix[i] + mleft[i-1] > 0);
    }

    cout << cnt << endl;
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