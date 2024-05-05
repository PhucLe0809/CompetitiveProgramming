#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q; cin >> q;
    int n; 
    string str;
    while (q--){
        cin >> n >> str;
        if (n>2 || (n==2 && str[0]<str[1])){
            cout << "YES\n" << "2\n";
            cout << str[0] << " " << str.substr(1, n-1) << '\n';
        }else cout << "NO\n";
    }
    return 0;
}