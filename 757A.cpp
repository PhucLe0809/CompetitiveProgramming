#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string pivot = "Bulbasaur";
    map <char, int> mp;
    for (auto &it:str) mp[it]++;
    int cnt = min({mp['B'], mp['u']/2, mp['l'], mp['b'], mp['a']/2, mp['s'], mp['r']});
    cout << cnt;
    return 0;
}