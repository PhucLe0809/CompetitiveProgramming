#include <bits/stdc++.h>

using namespace std;

bool check_hash(map <char, int> a, map <char, int> b){
    for (auto &it:a){
        if (it.second!=b[it.first]){
            // cout << it.first << '\n';
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string pass, hash;
    int n, m; bool check;
    while (test--){
        cin >> pass >> hash;
        n = pass.size(); m = hash.size();
        if (n>m){ cout << "NO\n"; continue; }
        map <char, int> mp;
        for (auto &it:pass) mp[it]++;
        map <char, int> scan;
        for (int i = 0; i < n; i++) scan[hash[i]]++;
        check = false;
        for (int i = n; i<=m && !check; i++){
            // for (auto &it:scan) cout << it.second << " ";
            if (check_hash(mp, scan)) check = true;
            else if (i<m){
                scan[hash[i-n]]--; scan[hash[i]]++;
            }
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}