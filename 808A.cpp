#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    if (str.size()==1) cout << 1;
    else cout << int64_t((str[0]-'0'+1)*pow(10, str.size()-1)-stoi(str));
    return 0;
}