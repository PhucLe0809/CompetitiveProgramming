#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void solve(){
    int n; cin >> n;
    map <int, int> mp;
    int prefix = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (i & 1) x = -x;
        prefix += x;
        mp[prefix]++;
    }
    mp[0]++;
    bool check = false;
    for (auto &it:mp) check = check || (it.second > 1);
    if (check) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}