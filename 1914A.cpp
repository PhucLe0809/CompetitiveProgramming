#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    map <char, int> mp;
    for (int i = 0; i < n; i++){
        char key; cin >> key; mp[key]++;
    }
    int res = 0;
    for (auto &it:mp) res += (int)(it.second > (it.first - 'A'));
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