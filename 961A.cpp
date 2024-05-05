#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    map <int, int> mp;
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        mp[x]++;
    }
    if (mp.size()<n) cout << 0;
    else{
        for (auto x:mp) m = min(m, x.second);
        cout << m;
    }
    return 0;
}