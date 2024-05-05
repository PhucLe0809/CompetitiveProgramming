#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t l, r, temp;
    map <int32_t, int32_t> mp;
    l = r = 0;
    for (int i = 0; i < n; i++){
        temp = str[i]-'0';
        mp[temp]++;
        if (i < n/2) l += temp;
        else r += temp;
    }
    if (mp.size()>2 || l!=r) cout << "NO\n";
    else{
        if (mp.size()==1){
            if (mp[4] || mp[7]) cout << "YES\n";
            else cout << "NO\n";
        }else{
            if (mp.size()==2){
                if (mp[4] && mp[7]) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}