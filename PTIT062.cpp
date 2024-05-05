#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 200005

using namespace std;
int mp[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        fill(mp, mp + maxarray, 0);
        for (int i = 1; i <= n; i++){
            int x; cin >> x; x += 1e5;
            if (mp[x] == 0) mp[x] = i;
        }
        vector <pair<int, int>> scan;
        for (int i = maxarray - 1; i >= 0; i--){
            if (mp[i] != 0) scan.push_back({i - 1e5, mp[i]});
        }
        if (scan.size() < 3) cout << "Khong the tim duoc!\n";
        else cout << scan[2].first << " " << scan[2].second << endl;
    }
    return 0;
}
