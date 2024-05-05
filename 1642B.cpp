#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    while (test--){
        cin >> n;
        set <int32_t> st;
        for (int i = 0; i < n; i++){
            cin >> x; st.insert(x);
        }
        x = st.size();
        for (int i = 1; i <= x; i++) cout << x << " ";
        for (int i = x+1; i <= n; i++) cout << i << " ";
        cout << '\n';
    }
    return 0;
}