#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    set <string> st;
    string str; cin.ignore(1);
    for (int i = 0; i < n; i++){
        getline(cin, str);
        st.insert(str);
    }
    cout << st.size();
    return 0;
}