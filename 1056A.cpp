#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    map <int32_t, int32_t> mp;
    int32_t r, c;
    for (int j = 0; j < n; j++){
        cin >> r;
        for (int i = 0; i < r; i++){
            cin >> c; mp[c]++;
        }
    }
    for (auto it:mp){
        if (it.second==n) cout << it.first << " ";
    }
    return 0;
}