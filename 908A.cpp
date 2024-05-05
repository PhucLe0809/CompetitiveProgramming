#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    map <char,int32_t> mp;
    for (auto x:str) mp[x]++;
    cout << mp['a']+mp['o']+mp['e']+mp['u']+mp['i']+mp['1']+mp['3']+mp['5']+mp['7']+mp['9'];
    return 0;
}