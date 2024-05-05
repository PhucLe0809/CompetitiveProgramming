#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        string str; cin >> str;
        string ansi; ansi += str[0];
        int i = 1;
        while (i<n){
            while (i<n && str[i]!=ansi.back()) i++;
            i++; if (i<n) ansi += str[i]; i++;
        }
        cout << ansi << '\n';
    }
    return 0;
}