#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    string ansi;
    for (int i = 0; i < n-1; i++){
        if (str[i]!=str[i+1]){
            ansi = str.substr(i, 2); break;
        }
    }
    if (ansi.empty()) cout << "NO\n";
    else cout << "YES\n" << ansi;
    return 0;
}