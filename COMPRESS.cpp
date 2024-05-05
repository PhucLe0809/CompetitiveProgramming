#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int n = str.size();
    for (int len = 1; len <= n; len++){
        if (n % len != 0) continue;
        int k = n / len;
        string ansi = str.substr(0, len);
        bool check = true;
        for (int i = 0; i + len <= n && check; i += len){
            string temp = str.substr(i, len);
            check = check && (ansi == temp);
        }
        if (check){
            cout << k << ansi;
            return 0;
        }
    }
    return 0;
}