#include <bits/stdc++.h>

using namespace std;

string non_zero(string str){
    int i = 0; 
    while (i < str.size()){
        if (str[i]=='0') str.erase(i, 1);
        else i++;
    }
    return str;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    int c = a+b;
    string x = to_string(a);
    string y = to_string(b);
    string z = to_string(c);
    a = stoi(non_zero(x));
    b = stoi(non_zero(y));
    c = stoi(non_zero(z));
    if (a+b==c) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}