#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    set <string> st;
    string str;
    while (n--){
        cin >> str;
        sort(str.begin(), str.end());
        str.erase(unique(str.begin(), str.end()), str.end());
        st.insert(str);
    }
    cout << st.size();
    return 0;
}