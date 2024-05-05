#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    map <string, int32_t> mp;
    string x;
    for (int i = 0; i < test; i++){
        cin >> x;
        mp[x]++;
        if (mp[x]==1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}