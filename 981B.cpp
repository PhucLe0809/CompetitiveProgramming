#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map <int64_t, int64_t> mp;
    int n; cin >> n;
    int64_t a, x;
    for (int i = 0; i < n; i++){
        cin >> a >> x; mp[a] = max(mp[a], x);
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> x; mp[a] = max(mp[a], x);
    }
    int64_t answer = 0;
    for (auto &it:mp) answer += it.second;
    cout << answer;
    return 0;
}