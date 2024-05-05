#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string ansi = str; reverse(ansi.begin(), ansi.end());
    if (str!=ansi){
        cout << "NO\n"; return 0;
    }
    char check[11]={'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    map <char, int> mp;
    for (int i = 0; i < 11; i++) mp[check[i]]++;
    bool ok = true;
    for (int i = 0; i<str.size() && ok; i++){
        ok = (mp[str[i]]!=0);
    }
    if (ok) cout << "YES\n"; else cout << "NO\n";
    return 0;
}