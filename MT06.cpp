#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    set <int> st;
    for (int i = 0; i < m*n; i++){
        int x; cin >> x;
        if (x >= 0 && sqrt(x) == (int)(sqrt(x))) st.insert(x);
    }
    if (st.empty()) cout << "NOT FOUND";
    else for (auto &it:st) cout << it << " ";
    return 0;
}