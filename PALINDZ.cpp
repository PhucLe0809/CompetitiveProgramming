#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_palind(string &str){
    int i = 0, len = str.size();
    while (i < len / 2){
        if (str[i] != str[len - i - 1]) return false;
        else i++;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int q; cin >> q;
    while (q--){
        int a, b; cin >> a >> b; a--; b--;
        string ansi = str.substr(a, b - a + 1);
        if (is_palind(ansi)) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}