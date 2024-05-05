#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int32_t x, cnt;
    string str;
    cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        map <int32_t, int32_t> mp;
        str = to_string(x);
        for (auto it:str) mp[it]++;
        if (mp['4']+mp['7']<=k) cnt++;
    }
    cout << cnt;
    return 0;
}