#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    set <int32_t> st;
    int32_t node, x;
    while (n--){
        cin >> node;
        for (int i = 0; i < node; i++){
            cin >> x; st.insert(x);
        }
    }
    if (st.size()==m) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}