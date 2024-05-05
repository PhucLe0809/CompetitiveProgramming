#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(string &str){
    bool check = true;
    int n = str.size();
    for (int i = 1; i < n && check; i++){
        check = check && (str[i] != str[i-1]);
    }
    return check;
}

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    if (is_good(s)){
        cout << "Yes\n"; return;
    }
    if (!is_good(t) || *t.begin() != t.back()){
        cout << "No\n"; return;
    }
    bool check = true;
    for (int i = 1; i < n && check; i++){
        check = check && ((s[i] == s[i-1])?(s[i] != t.back()):(true));
    }
    if (check) cout << "Yes\n"; else cout << "No\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}