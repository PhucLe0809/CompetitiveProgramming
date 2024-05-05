#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    set <char> st;
    for (auto x:str) st.insert(x);
    if (str.size()!=1 && st.size()==str.size()) cout << "No";
    else cout << "Yes";
    return 0;
}