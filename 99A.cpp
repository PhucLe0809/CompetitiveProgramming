#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int32_t pos;
    for (int i = 0; i < str.size(); i++){
        if (str[i]=='.'){
            pos = i; break;
        }
    }
    if (str[pos-1]=='9') cout << "GOTO Vasilisa.\n";
    else{
        if (str[pos+1]<'5'){
            for (int i = 0; i < pos; i++) cout << str[i];
        }else{
            string ansi = str.substr(0, pos);
            ansi[pos-1] = char(ansi[pos-1]+1);
            cout << ansi;
        }
    }
    return 0;
}