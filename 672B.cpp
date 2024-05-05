#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    if (n>26){ cout << -1; return 0; }
    set <int> st;
    for (auto &it:str) st.insert(it);
    // cout << st.size();
    int answer = str.size()-st.size();
    cout << answer;
    return 0;
}