#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b, c; cin >> a >> b >> c;
    int32_t n, x; cin >> n;
    map <int32_t, int32_t> mp;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int32_t cnt = 0;
    for (auto it:mp){
        if (it.first>b && it.first<c) 
            cnt += it.second;
    }
    cout << cnt;
    return 0;
}