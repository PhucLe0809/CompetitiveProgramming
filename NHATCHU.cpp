#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    set <char> st;
    string ansi = "";
    for (auto &it:str){
        if (st.find((it)) == st.end()){
            st.insert((it));
            ansi += it;
        }
    }
    cout << ansi;
    return 0;
}