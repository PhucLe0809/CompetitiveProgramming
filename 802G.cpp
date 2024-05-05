#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string pivot = "heidi";
    string str; cin >> str;
    int32_t i, j;
    i = 0; j = 0;
    while (i<str.size() && j<pivot.size()){
        if (str[i]==pivot[j]){
            i++; j++;
        }else i++;
    }
    if (j==pivot.size()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}