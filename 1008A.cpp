#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (!(str.back()=='e' || str.back()=='o' || str.back()=='a' || str.back()=='u' || str.back()=='i' || str.back()=='n')){
        cout << "NO"; return 0;
    }
    bool check = true;
    for (int i = 0; i < str.size()-1 && check; i++){
        if (!(str[i]=='e' || str[i]=='o' || str[i]=='a' || str[i]=='u' || str[i]=='i' || str[i]=='n')){
            if (!(str[i+1]=='e' || str[i+1]=='o' || str[i+1]=='a' || str[i+1]=='u' || str[i+1]=='i')){
                check = false;
            }
        }
    }
    if (check) cout << "YES"; else cout << "NO";
    return 0;
}