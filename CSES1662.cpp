#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + x;
        prefix[i] %= n;
        // cout << prefix[i] << " ";
    }
    // cout << endl;
    int cnt = 0;
    map <int, int> mp;
    for (int i = n; i >= 0; i--){
        cnt += mp[prefix[i]];
        cnt += mp[n + prefix[i]];
        cnt += mp[2*n + prefix[i]];
        cnt += mp[-n + prefix[i]];
        cnt += mp[-2*n + prefix[i]];
        mp[prefix[i]]++;
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