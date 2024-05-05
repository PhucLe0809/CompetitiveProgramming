#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_palind(string str){
    string ansi = str;
    reverse(ansi.begin(), ansi.end());
    return ansi == str;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        int k; cin >> k;
        if (is_palind(str)) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}