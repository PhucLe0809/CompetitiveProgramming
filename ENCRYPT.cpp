#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    string ansi = "";
    int num = 0;
    for (auto &it:str){
        if (isdigit(it)) num += it - '0';
        else ansi += it;
    }
    cout << ansi << num;
    return 0;
}