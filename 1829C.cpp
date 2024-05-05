#include <bits/stdc++.h>
#define maxarray 2000005

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    map <string, int32_t> mp;
    int32_t n, x;
    string skill;
    while (test--){
        cin >> n;
        mp["01"] = mp["10"] = maxarray;
        mp["11"] = mp["00"] = maxarray;
        for (int i = 0; i < n; i++){
            cin >> x >> skill;
            mp[skill] = min(mp[skill], x);
        }
        if (mp["11"]==maxarray && (mp["10"]==maxarray || mp["01"]==maxarray)){
            cout << -1 << '\n';
        }else{
            if (mp["11"] <= mp["10"]+mp["01"]){
                cout << mp["11"] << '\n';
            }else{
                if (mp["11"] > mp["10"]+mp["01"]){
                    cout << mp["10"]+mp["01"] << '\n';
                }
            }
        }
    }
    return 0;
}