#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    reverse(str.begin(), str.end());
    while (str.size() > 1 && str[0] == '0') str.erase(str.begin());
    cout << str;
    return 0;
}