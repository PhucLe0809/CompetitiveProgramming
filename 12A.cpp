#include <bits/stdc++.h>

using namespace std; 
string inp[5], scan[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str;
    for (int i = 0; i < 3; i++){
        cin >> inp[i];
        str = inp[i];
        reverse(str.begin(), str.end());
        scan[3-i-1] = str;
    }
    bool check = true;
    for (int i = 0; i<3 && check; i++){
        if (inp[i]!=scan[i]) check = false;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}