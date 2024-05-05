#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    string str; cin >> str;
    map <char, int> mp;
    for (auto x:str) mp[x]++;
    bool check = true;
    for (auto x:mp){
        if (x.second>k) check = false;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}