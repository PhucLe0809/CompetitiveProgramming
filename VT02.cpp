#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    set <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x; st.insert(x);
    }
    if (st.size() == 1) cout << "NOT FOUND";
    else cout << *(--(--st.end()));
    return 0;
}