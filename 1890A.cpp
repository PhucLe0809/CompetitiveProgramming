#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x; mp[x]++;
    }
    if (mp.size() == 1){
        cout << "Yes\n"; return;
    }
    if (mp.size() == 2 && abs(mp.begin()->second - (++mp.begin())->second) <= 1){
        cout << "Yes\n";
    }else cout << "No\n";
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