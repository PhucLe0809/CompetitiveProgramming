#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    map <char, int> mp;
    for (auto &it:str) mp[it]++;
    cout << min({mp['U'], mp['D'], mp['L'], mp['R']})*4
    + (min(mp['U'], mp['D'])-min({mp['U'], mp['D'], mp['L'], mp['R']}))*2
    + (min(mp['L'], mp['R'])-min({mp['U'], mp['D'], mp['L'], mp['R']}))*2;
    return 0;
}