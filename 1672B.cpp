#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t cnt;
    string str; bool check;
    while (test--){
        cin >> str;
        if (str[0]=='B' || str.back()=='A'){
            cout << "NO\n";
            continue;
        }
        check = true; cnt = 0;
        for (int i = 0; i<str.size() && check; i++){
            if (str[i]=='A') cnt++;
            else cnt--;
            if (cnt<0) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}