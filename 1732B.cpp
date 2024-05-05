#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; 
    string str, ansi;
    while (test--){
        cin >> n >> str;
        ansi = str[0];
        for (int i = 0; i < str.size()-1; i++){
            if (str[i]!=str[i+1]) ansi += str[i+1];
        }
        if (ansi.size()==1){
            cout << "0\n"; continue;
        }
        if (ansi[0]=='0') cout << int64_t(ansi.size()-2) << '\n';
        else cout << int64_t(ansi.size()-1) << '\n';
    }
    return 0;
}