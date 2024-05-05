#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    set <int32_t> st;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x) st.insert(x);
    }
    cout << st.size();
    return 0;
}