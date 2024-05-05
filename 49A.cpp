#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; 
    getline(cin, str);
    while (str.back()=='?' || str.back()==' ') str.erase(str.size()-1, 1);
    if (tolower(str.back())=='a' || tolower(str.back())=='o' || tolower(str.back())=='e'
    || tolower(str.back())=='u' || tolower(str.back())=='i' || tolower(str.back())=='y')
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}