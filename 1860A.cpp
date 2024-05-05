#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    bool one = false, two = false;
    for (int i = 1; i < (int)str.size() && (!one || !two); i++){
        one = one || (str[i] == str[i-1]);
        two = two || (str[i-1] == ')' && str[i] == '('); 
    }
    if (one || two){
        cout << "YES\n";
        if (two){
            for (int i = 0; i < (int)str.size(); i++) cout << "(";
            for (int i = 0; i < (int)str.size(); i++) cout << ")";
        }else{
            for (int i = 0; i < (int)str.size(); i++) cout << "()";
        }
        cout << endl;
    }else cout << "NO\n";
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