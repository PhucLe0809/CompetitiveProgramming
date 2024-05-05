#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    multiset <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x; st.insert(x);
    }
    int k; cin >> k; st.insert(k);
    for (auto &it:st) cout << it << " ";
    return 0;
}