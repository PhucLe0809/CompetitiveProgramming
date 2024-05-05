#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    string str; getline(cin, str);
    map <char, int> mp;
    for (auto &it:str) mp[tolower(it)]++;
    int test; cin >> test;
    while (test--){
        char key; cin >> key;
        cout << mp[tolower(key)] << endl;
    }
    return 0;
}