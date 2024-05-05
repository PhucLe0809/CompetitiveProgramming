#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int k; cin >> k;
    map <int, int> mp;
    char x;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> x;
            if (x=='.') continue;
            mp[x-'0']++;
        }
    } 
    bool check = true;
    for (auto x:mp){
        if (x.second>2*k) check = false;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}