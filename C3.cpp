#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int cnt = 0;
    map <int, int> mp;
    for (int i = n-1; i >= 0; i--){
        int num = m - inp[i];
        mp[inp[i]]++;
        if (sqrt(num) == (int)sqrt(num)) cnt += mp[(int)sqrt(num)];
    }
    cout << cnt;
    return 0;
}