#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, t;
    while (test--){
        cin >> str >> t;
        map <char, int32_t> mp;
        for (auto x:str) mp[x]++;
        for (int i = 0; i < mp['a']; i++) cout << "a";
        if (t[1]=='b' && t[2]=='c' && mp['a']!=0){
            for (int i = 0; i < mp['c']; i++) cout << "c";
            for (int i = 0; i < mp['b']; i++) cout << "b";
        }else{
            for (int i = 0; i < mp['b']; i++) cout << "b";
            for (int i = 0; i < mp['c']; i++) cout << "c";
        }
        for (auto it:mp){
            if (it.first=='a' || it.first=='b' || it.first=='c')
                continue;
            for (int i = 0; i < it.second; i++) cout << it.first;
        }
        cout << '\n';
    }
    return 0;
}