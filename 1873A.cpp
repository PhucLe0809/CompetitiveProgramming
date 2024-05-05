#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        string pivot = "abc";
        int cnt = 0;
        for (int i = 0; i < 3; i++) cnt += (str[i] == pivot[i]);
        if (cnt >= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}