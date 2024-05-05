#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, cnt0;
    while (test--){
        cin >> n;
        set <int32_t> st; cnt0 = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (!x) cnt0++;
            else st.insert(x);
        }
        if (cnt0!=0) cout << n-cnt0 << '\n';
        else{
            if (st.size()==n-cnt0) cout << n-cnt0+1 << '\n';
            else cout << n-cnt0 << '\n';
        }
    }
    return 0;
}