#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    bool check = true;
    char infront = 'a';
    char x;
    for (int i = 0; i < n; i++){
        set <char> st;
        for (int j = 0; j < m; j++){
            cin >> x; st.insert(x);
        }
        if (st.size()>1) check = false;
        else{
            if (*st.begin()==infront) check = false;
            else infront = *st.begin();
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}