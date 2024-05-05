#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int32_t num;
    for (int t = str.size()-1; t >= 0; t--){
        num = str[t]-'0';
        if (num < 5) cout << "O-|";
        else{
            cout << "-O|";
            num -= 5;
        }
        for (int i = 0; i < num; i++) cout << "O";
        cout << "-";
        for (int i = 0; i < 4-num; i++) cout << "O";
        cout << '\n';
    }
    return 0;
}