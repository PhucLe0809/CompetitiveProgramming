#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s, t; cin >> s >> t;
    int k; cin >> k;
    if ((int)t.size() / (int)s.size() != k){
        cout << "NO"; return 0;
    }
    bool check = true;
    for (int i = 0; i < t.size() && check; i += (int)s.size()){
        string temp = t.substr(i, (int)s.size());
        check = check && (temp == s);
    }
    if (check) cout << "YES"; else cout << "NO";
    return 0;
}