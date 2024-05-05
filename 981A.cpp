#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    set <char> st;
    for (auto x:str) st.insert(x);
    if (st.size()==1) cout << 0;
    else{
        string ansi = str;
        reverse(ansi.begin(), ansi.end());
        if (ansi==str) cout << ansi.size()-1;
        else cout << ansi.size();
    }
    return 0;
}