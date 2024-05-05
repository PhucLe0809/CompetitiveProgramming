#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

vector<int> Z_Function(const string& s){ 
    int n = s.size();
    vector<int> z(n, 0);
    for (int i = 1, l = 0, r = 0; i < n; i++){
        if (i <= r) z[i] = min(z[i - l], r - i + 1);
        while (i + z[i] < n && s[i + z[i]] == s[z[i]]) ++z[i];
        if (i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
    }
    return z;
}

void GOTOHANOI(){
    string a, b; cin >> a >> b;
    string s = b + '#' + a;
    vector<int> z = Z_Function(s);
    int ans = 0;
    for (int i = b.size() + 1; i < s.size(); i++) {
        if (ans < z[i] && i + z[i] == s.size()) ans = z[i];
    }
    cout << a;
    for (int i = ans; i < b.size(); i++) cout << b[i];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}