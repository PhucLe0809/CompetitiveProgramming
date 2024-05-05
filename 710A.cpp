#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (str=="a8" || str=="h8" || str=="a1" || str=="h1")
        cout << 3;
    else{
        if (str[1]=='1' || str[1]=='8' || str[0]=='a' || str[0]=='h') cout << 5;
        else cout << 8;
    }
    return 0;
}