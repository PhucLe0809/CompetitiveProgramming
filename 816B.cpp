#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 200005

using namespace std;
vector <int> diff(maxarray), prefix(maxarray);

void GOTOHANOI(){
    int n, k, q; cin >> n >> k >> q;

    // fill(diff, diff + maxarray, 0LL);
    for (int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        diff[l]++; diff[r+1]--;
    }
    for (int i = 1; i < maxarray; i++){
        diff[i] += diff[i-1];
    }

    // fill(prefix, prefix + maxarray, 0LL);
    for (int i = 1; i < maxarray; i++){
        prefix[i] = prefix[i-1] + (diff[i] >= k);
    }

    while (q--){
        int a, b; cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << endl;
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