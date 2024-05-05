#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str;
    while (test--){
        cin >> str;
        if (str.size()%2==0 && str[0]!=')' && str[str.size()-1]!='(') cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}