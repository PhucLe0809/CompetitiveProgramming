#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    string ansi = "";
    int32_t i = 0;
    while (i<n-1){
        if (str.substr(i, 2)=="UR" || str.substr(i, 2)=="RU"){
            ansi += 'D'; i++;
        }else ansi += str[i];
        i++;
    }
    cout << ansi.size()+(n-i);
    return 0;
}