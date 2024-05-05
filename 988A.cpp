#include <bits/stdc++.h>

using namespace std; 
map <int32_t, int32_t> mp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int32_t rate;
    for (int i = 1; i <= n; i++){
        cin >> rate; mp[rate] = i;
    }
    if (mp.size()<k) cout << "NO\n";
    else{
        cout << "YES\n";
        map <int32_t, int32_t> :: iterator it;
        it = mp.begin();
        while (k--){
            cout << it->second << " ";
            it++;
        }
    }
    return 0;
}