#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi;
    while (test--){
        cin >> str;
        if (str.size()<4){
            cout << "FILIPINO\n"; continue;
        }
        if (str.size()<5){
            ansi = str.substr(str.size()-4, 4);
            if (ansi=="desu" || ansi=="masu") cout << "JAPANESE\n";
            else cout << "FILIPINO\n";
            continue;
        }
        ansi = str.substr(str.size()-5, 5);
        if (ansi=="mnida") cout << "KOREAN\n";
        else{
            ansi.erase(ansi.begin());
            if (ansi=="desu" || ansi=="masu") cout << "JAPANESE\n";
            else cout << "FILIPINO\n";
        }
    }
    return 0;
}