#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x; mp[x]++;
    }
    int val, fre = 0;
    for (auto &it:mp){
        if (fre <= it.second){
            fre = it.second; val = it.first;
        }
    }
    cout << val << " " << fre;
    return 0;
}