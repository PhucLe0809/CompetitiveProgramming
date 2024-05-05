#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int h = 0;
    for (auto &it:mp) h = max(h, it.second);
    cout << h << " " << mp.size();
    return 0;
}