#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    while (test--){
        cin >> str;
        map <char, int32_t> mp;
        for (auto x:str) mp[x]++;
        for (int i = 0; ;){
            while (mp[str[i]]>1){
                mp[str[i]]--;
                str.erase(i, 1);
            }
            break;
        }
        cout << str << '\n';
    }
    return 0;
}