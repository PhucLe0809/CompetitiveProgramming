#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    map <char, int> mp;
    for (auto &x:str) mp[x]++;
    if (mp['I']==0) cout << mp['A'];
    else if ((mp['A'] || mp['F']) && mp['I']==1) cout << mp['I']; else cout << 0;
    return 0;
}