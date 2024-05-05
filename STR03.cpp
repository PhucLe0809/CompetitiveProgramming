#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test; cin.ignore(1);
    while (test--){
        string str; getline(cin, str);
        str = ' ' + str;
        for (int i = 1; i < str.size(); i++){
            if (str[i] != ' '){
                if (str[i-1] == ' ') str[i] = toupper(str[i]);
                else str[i] = tolower(str[i]);
            }
        }
        str.erase(str.begin());
        cout << str << endl;
    }
    return 0;
}