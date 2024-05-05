#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    while (test--){
        cin >> n >> str;
        set <string> st;
        for (int i = 0; i < n-1; i++){
            st.insert(str.substr(i, 2));
        }
        cout << st.size() << '\n';
    }
    return 0;
}