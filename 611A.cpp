#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; getline(cin, str);
    int n = str[0]-'0';
    if (str[1]!=' ') n = n*10+(str[1]-'0');
    if (str.back()=='k'){
        if (n==5 || n==6) cout << 53;
        else cout << 52;
    }
    if (str.back()=='h'){
        if (n<=29) cout << 12;
        if (n==30) cout << 11;
        if (n==31) cout << 7;
    }
    return 0;
}