#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    map <char, int> mp;
    for (auto &it:str) mp[it]++;
    if (mp['4']==0 && mp['7']==0) cout << -1;
    else{
        if (mp['4'] >= mp['7']) cout << 4;
        else cout << 7;
    }
    return 0;
}