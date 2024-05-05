#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    map <int, pair<int, int>> mp;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (mp[x].first == 0) mp[x].first = i;
        else mp[x].second = i;
    }
    for (auto &it:mp) (it.second.second == 0)?(it.second.second = it.second.first):(it.second.second);
    while (k--){
        int a, b; cin >> a >> b;
        if (mp[a].first == 0 || mp[b].first == 0){
            cout << "NO\n"; continue;
        }
        if (mp[a].first < mp[b].second) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}