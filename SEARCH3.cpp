#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    map <int, int> mp;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (mp[x] == 0) mp[x] = i;
    }
    for (int i = 1; i <= m; i++){
        int x; cin >> x;
        cout << mp[x] << " ";
    }
    return 0;
}