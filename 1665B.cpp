#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, cnt;
    while (test--){
        cin >> n;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < n; i++){
            cin >> x; mp[x]++;
        }
        cnt = 0;
        for (auto it:mp) cnt = max(cnt, it.second);
        if (cnt==n) cout << 0 << '\n';
        else cout << (n-cnt)+int32_t(ceil(log((n-cnt)*1.0/cnt+1.0)*1.0/log(2.0))) << '\n';
    }
    return 0;
}