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
        int x, y; cin >> x >> y;
        mp[x] += y;
    }
    int k; cin >> k;
    int sum = 0;
    for (auto &it:mp){
        if (sum + it.second >= k){
            cout << it.first; return 0;
        }
        sum += it.second;
    }
    return 0;
}