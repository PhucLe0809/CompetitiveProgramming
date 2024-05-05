#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; cin.ignore(1);
    set <string> st;
    for (int i = 0; i < n; i++){
        string str; getline(cin, str); st.insert(str);
    }
    cout << st.size();
    return 0;
}