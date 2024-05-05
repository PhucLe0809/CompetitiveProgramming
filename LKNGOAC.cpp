#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    stack <int> sta;
    for (int i = 0; i < (int)str.size(); i++){
        if (str[i] == '(') sta.push(i+1);
        else{
            cout << sta.top() << " " << i+1 << endl;
            sta.pop();
        }
    }
    return 0;
}