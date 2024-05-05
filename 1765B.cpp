#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; bool check;
    int32_t n, i;
    while (test--){
        cin >> n >> str;
        check = true;
        i = 0;
        while (i<str.size() && check){
            if (i%2!=0){
                if (str[i]!=str[i+1]) check = false;
                else str.erase(i, 1);
            }
            i++;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}