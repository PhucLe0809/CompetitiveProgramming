#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    set <char> st;
    for (auto &it:str) st.insert(it);
    cout << st.size();
    return 0;
}