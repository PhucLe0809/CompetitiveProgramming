#include <bits/stdc++.h>

using namespace std; 

bool comp(pair <int32_t, int32_t> a, pair <int32_t, int32_t> b){
    return (a.first < b.first);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    map <int32_t, int32_t> mp;
    int32_t x, m;
    m = 0;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
        m = max(m, x);
    }
    n = max(n-(mp.begin()->second), 0);
    auto it = lower_bound(mp.begin(), mp.end(), pair <int32_t, int32_t> (m, 0), comp);
    n = max(n-(it->second), 0);
    cout << n;
    return 0;
}