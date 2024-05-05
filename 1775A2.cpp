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
        if (str[1]=='b'){
            cout << str[0] << " ";
            cout << str.substr(1, str.size()-2) << " ";
            cout << str[str.size()-1] << " ";
        }else{
            cout << str[0] << " " << str[1] << " ";
            cout << str.substr(2, str.size()-2) << " ";
        }
        cout << '\n';
    }
    return 0;
}