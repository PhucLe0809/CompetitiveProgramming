#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int k; cin >> k;
    string str; cin >> str;
    map <char, int> mp;
    for (auto &x:str) mp[x]++;
    bool check = true;
    string ansi;
    for (auto &x:mp){
        if (x.second%k!=0){ check = false; break; }
        else{
            for (int i = 0; i < x.second/k; i++) ansi += x.first;
        }
    }
    if (!check) cout << -1;
    else{
        for (int i = 0; i < str.size()/ansi.size(); i++) cout << ansi;
    }
    return 0;
}