#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    string str;
    while (cin >> str){
        if (str[0] == str.back()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}