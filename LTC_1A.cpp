#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        string ansi; ansi += str[0]; int cnt = 1;
        for (int i = 1; i < str.size(); i++){
            if (str[i] != str[i-1]) ansi += to_string(cnt), ansi += str[i], cnt = 1;
            else cnt++;
        }
        ansi += to_string(cnt);
        cout << ansi << endl;
    }
    return 0;
}