#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str, ansi;
    bool b;
    while (test--){
        cin >> str >> ansi;
        b = true;
        for (auto x:ansi){
            if (x=='a'){ b = false; break; }
        }
        if (!b){
            if (ansi.size()==1) cout << 1 << '\n';
            else cout << -1 << '\n';
        }else{
            cout << fixed << setprecision(0) << pow(2, str.size()) << '\n';
        }
    }
    return 0;
}