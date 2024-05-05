#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    map <int32_t, int32_t> mp;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int32_t cnt = 0;
    bool check = true;
    for (auto it:mp){
        if (it.first!=0 && it.second==2) cnt++;
        if (it.first!=0 && it.second>2){
            check = false; break;
        }
    }
    if (!check) cout << -1; 
    else cout << cnt;
    return 0;
}