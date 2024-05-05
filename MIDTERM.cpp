#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    vector <int> sub(m); int sum = 0;
    for (auto &it:sub) cin >> it, sum += it;
    if (sum > n){
        cout << -1; return 0;
    }
    set <int> st; int day;
    for (day = 0; day < n && day < m; day++){
        st.insert(inp[day]);
    }
    cout << max(sum + m, day + 1);
    return 0;
}