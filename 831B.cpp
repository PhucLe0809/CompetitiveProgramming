#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi, temp;
    cin >> str >> ansi >> temp;
    map <char, char> mp;
    for (int i = 0; i < 26; i++){
        mp[str[i]] = ansi[i];
    }
    for (auto x:temp){
        if (!mp[tolower(x)]){
            cout << x; continue;
        }
        if ('a'<=x && x<='z') cout << mp[x];
        else cout << char(toupper(mp[tolower(x)]));
    }
    return 0;
}