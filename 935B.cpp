#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    str += '0';
    int cost = 0;
    int x, y; x = y = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i]=='0') break;
        if (str[i]=='U') y++;
        else x++;
        if (x==y && str[i+1]==str[i]) cost++;
    }
    cout << cost;
    return 0;
}