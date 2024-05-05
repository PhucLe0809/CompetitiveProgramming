#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int k; cin >> k;
    set <char> st;
    for (auto &it:str) st.insert(it);
    if (st.size()>=k) cout << 0;
    else{
        if (str.size() < k) cout << "impossible\n";
        else cout << k-st.size();
    }
    return 0;
}