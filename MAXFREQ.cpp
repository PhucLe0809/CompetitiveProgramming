#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    map <int, int> mp, ind;
    for (int i = 0; i < n; i++){
        int x; cin >> x; mp[x]++;
        if (ind[x] == 0) ind[x] = i+1;
    }
    int fre = 0;
    for (auto &it:mp) fre = max(fre, it.second);
    vector <pair<int, int>> scan;
    for (auto &it:mp){
        if (it.second == fre) scan.push_back({ind[it.first], it.first});
    }
    sort(scan.begin(), scan.end());
    cout << scan[0].second << " " << fre;
    return 0;
}