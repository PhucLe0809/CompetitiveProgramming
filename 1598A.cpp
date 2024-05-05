#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; bool check;
    string str, ansi;
    while (test--){
        cin >> n >> str >> ansi;
        check = true;
        for (int j = 0; j < n && check; j++){
            if (str[j]==ansi[j] && str[j]=='1') 
                check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}