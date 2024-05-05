#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x, pos;
    map <int32_t, int32_t> mp;
    for (int i = 1; i <= n; i++){
        cin >> x; mp[x] = i;
    }
    if (mp.size()<2) cout << "NO\n";
    else{
        int32_t cnt = 1;
        map <int32_t, int32_t> :: iterator it;
        for (it=mp.begin(); it!=mp.end(); it++, cnt++){
            if (cnt==2){
                pos = it->first; break;
            }
        }
        cout << pos;
    }
    return 0;
}