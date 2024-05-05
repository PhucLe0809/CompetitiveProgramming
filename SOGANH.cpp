#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    if (str.size() <= 2){
        cout << -1; return 0;
    }
    int res = 0, len = str.size();
    for (int i = 0; i < len / 2; i++){
        string a = str.substr(0, i+1);
        string b = str.substr(len - i-1, i+1);
        if (a == b) res = max(res, i+1);
    }
    if (res == 0) cout << -1;
    else{
        if (len > 2*res) cout << res; else cout << res - 1;
    }
    return 0;
}