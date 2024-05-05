#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s, t; cin >> s >> t;
    cout << s[0];
    for (int i = 1; i < s.size(); i++){
        if (s[i]>=t[0]) break;
        cout << s[i];
    }
    cout << t[0];
    return 0;
}