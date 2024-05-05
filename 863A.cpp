#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    while (str.back()=='0') str.erase(str.size()-1, 1);
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    if (str==tmp) cout << "YES";
    else cout << "NO";
    return 0;
}