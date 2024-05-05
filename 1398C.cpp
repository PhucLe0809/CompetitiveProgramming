#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string str; cin >> str;

    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + (str[i-1] - '0') - 1;
    }

    int cnt = 0;
    map <int, int> mp;
    for (int i = n; i >= 0; i--){
        cnt += mp[prefix[i]];
        mp[prefix[i]]++;
    }

    cout << cnt << endl;
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