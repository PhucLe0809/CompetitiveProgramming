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
        if (str[0]!=str[str.size()-1]) str[0]=str[str.size()-1];
        cout << str << '\n';
    }
    return 0;
}