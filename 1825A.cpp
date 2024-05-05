#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str;
    while (test--){
        cin >> str;
        set <int32_t> st;
        for (auto x:str) st.insert(x);
        if (st.size()==1) cout << -1 << '\n';
        else cout << str.size()-1 << '\n';
    }
    return 0;
}