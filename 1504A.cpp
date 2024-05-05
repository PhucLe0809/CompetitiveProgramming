#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi; 
    int32_t pos;
    while (test--){
        cin >> str;
        pos = -1;
        for (int i = 0; i < str.size(); i++) 
            if (str[i]!='a'){
                pos = i; break;
            }
        if (pos!=-1){
            ansi = str+"a";
            reverse(ansi.begin(), ansi.end());
            if (ansi==str+"a") str.insert(0, "a");
            else str += "a";
            cout << "YES\n";
            cout << str << '\n';
        } else cout << "NO\n";        
    }
    return 0;
}