#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map <int, int> mp; int x;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    if (mp.size()!=2 || (mp.begin()->second)!=n/2) cout << "NO\n";
    else{
        cout << "YES\n";
        for (auto &it:mp) cout << it.first << " ";
    }
    return 0;
}