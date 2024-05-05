#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string x;
    map <string, int> mp;
    for (int i = 1; i <= 10; i++){
        cin >> x; mp[x]=i;
    }
    for (int i = 0; i < 8; i++){
        x = str.substr(10*i, 10);
        cout << mp[x]-1;
    }
    return 0;
}