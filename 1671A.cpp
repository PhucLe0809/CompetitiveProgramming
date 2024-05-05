#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; bool check;
    int32_t n;
    while (test--){
        cin >> str; check = true;
        n = str.size();
        if (str[0]!=str[1]) check = false;
        if (str[n-1]!=str[n-2]) check = false;
        for (int i = 1; i < n-1; i++){
            if (str[i-1]!=str[i] && str[i]!=str[i+1]){
                check = false; break;
            }
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}