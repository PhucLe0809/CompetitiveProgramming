#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi; char key;
    while (test--){
        cin >> str;
        set <int32_t> st;
        for (auto x:str) st.insert(x);
        if (st.size()==1) cout << -1;
        else{
            ansi = str;
            reverse(ansi.begin(), ansi.end());
            if (str==ansi){
                key = str[str.size()/2];
                str.erase(str.size()/2, 1); str += key;
            }
            cout << str;
        }
        cout << '\n';
    }
    return 0;
}