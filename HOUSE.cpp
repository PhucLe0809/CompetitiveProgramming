#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string str; cin >> str;
    int res = 0, cnt = 1;
    for (int i = 1; i < (int)str.size(); i++){
        if (str[i] == str[i-1]) cnt++;
        else{
            res += cnt / 2; cnt = 1;
        }
    }
    res += cnt / 2;
    cout << res;
    return 0;
}