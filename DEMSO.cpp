#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    str += '.';
    int cnt = 0;
    for(int i = 1; i < str.size(); i++){
        if (!isdigit(str[i]) && isdigit(str[i-1])) cnt++;
    }
    cout << cnt;
    return 0;
}