#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    map <char, int> mp;
    int res = LONG_MAX;
    int l = 0, r = 0;
    while (r < (int)str.size()){
        mp[str[r]]++;
        if (mp.size() == 26){
            while (l <= r && mp.size() == 26){
                if (mp[str[l]] == 1) mp.erase(str[l]);
                else mp[str[l]]--;
                l++;
            }
            res = min(res, r - l + 2);
        }
        r++;
    }
    if (res == LONG_MAX) cout << -1; else cout << res;
    return 0;
}