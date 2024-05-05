#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    pair <int32_t, int32_t> even, odd;
    while (test--){
        cin >> str;
        map <char, int32_t> mp;
        for (auto x:str) mp[x]++;
        if (mp.size()==1) cout << "NO\n";
        else{
            even.first = odd.first = 0;
            for (auto it:mp){
                if (it.second%2==0) even.first++;
                else{
                    odd.first++; odd.second = it.second;
                }
            }
            if (odd.first>1) cout << "NO\n";
            else{
                if (odd.first==0){
                    if (mp.size()>1) cout << "YES\n";
                    else cout << "NO\n";
                }else{
                    if (mp.size()==2){
                        if (odd.second>1) cout << "YES\n";
                        else cout << "NO\n";
                    } else if (mp.size()>2) cout << "YES\n";
                            else cout << "NO\n";
                }
            }
        }
    }
    return 0;
}