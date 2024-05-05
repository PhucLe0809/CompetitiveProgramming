#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    for (auto &it:str) (it == ',')?(it = ' '):(it);
    cout << str;
    return 0;
}