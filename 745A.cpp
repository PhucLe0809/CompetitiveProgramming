#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    set <string> st;
    int n = str.size();
    string tmp;
    for (int i = 0; i < n; i++){
        tmp = str[n-1];
        str.insert(0, tmp);
        str.erase(n, 1);
        st.insert(str);
    }
    cout << st.size();
    return 0;
}