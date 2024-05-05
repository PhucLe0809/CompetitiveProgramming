#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; int64_t x; cin >> n >> x;
    map <int64_t, int64_t> mp;
    int64_t m, inp; m = 0;
    int64_t cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> inp;
        m = m + inp; 
        if (m == x) cnt++;
        if (mp.count(m - x)) cnt += mp[m - x];
        mp[m]++;
    }
    cout << cnt;
    return 0;
}