#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; n = abs(n);
    string str = to_string(n);
    if (str.size() > 2) cout << str.substr(str.size() - 3, 3);
    else{
        if (str.size() == 1) cout << "00" << str;
        else cout << "0" << str;
    }
    return 0;
}