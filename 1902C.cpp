#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n);
        for (auto &it:inp) cin >> it;
        if (n == 1){
            cout << 1 << endl;
            continue;
        }
        int maxx = *max_element(inp.begin(), inp.end());
        vector <int> dis(n);
        for (int i = 0; i < n; i++){
            dis[i] = maxx - inp[i];
        }
        int gcd = __gcd(dis[0], dis[1]);
        for (int i = 2; i < n; i++) gcd = __gcd(gcd, dis[i]);
        int cnt = 0;
        for (auto &it:dis) cnt += it / gcd;
        int y = maxx - gcd;
        sort(inp.begin(), inp.end());
        while (binary_search(inp.begin(), inp.end(), y)) y -= gcd;
        cnt += (maxx - y) / gcd;
        cout << cnt << endl;
    }
    return 0;
}