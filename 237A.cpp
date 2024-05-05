#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin.ignore(1);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        getline(cin, str);
        mp[str]++;
    }
    int m = 0;
    for (auto x:mp) m = max(m, x.second);
    cout << m;
    return 0;
}