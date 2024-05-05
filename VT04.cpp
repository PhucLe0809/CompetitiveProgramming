#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    set <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x; st.insert(x);
    }
    if (st.find(k) != st.end()) cout << "YES";
    else cout << "NO";
    return 0;
}