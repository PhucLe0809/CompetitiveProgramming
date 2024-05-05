#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void compact_str(string &str){
    while (!str.empty() && str[0] == ' ') str.erase(str.begin());
    while (!str.empty() && str.back() == ' ') str.erase(--str.end());
    int i = 0;
    while (!str.empty() && i < str.size()-1){
        if (str[i] == ' ' && str[i+1] == ' ') str.erase(str.begin() + i);
        else i++;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test; cin.ignore(1);
    while (test--){
        string str; getline(cin, str);
        compact_str(str);
        cout << str << endl;
    }
    return 0;
}