#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map <int, int> mp;
    for (int i = 0; i < 3; i++){
        int x; cin >> x; mp[x]++;
    }
    if(mp[5] == 2 && mp[7] == 1) cout << "YES"; else cout << "NO";
    return 0;
}