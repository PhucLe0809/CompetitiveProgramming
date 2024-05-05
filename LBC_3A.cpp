#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i <= test; i++){
        int n; cin >> n;
        string str; cin >> str;
        str += '.';
        int res = 0, cnt = 1;
        for (int i = 1; i < str.size(); i++){
            if (str[i] == str[i-1]) cnt++;
            else{
                res = max(res, cnt); cnt = 1;
            }
        }
        cout << "Case #" << i << ": " << res << endl;
    }
    return 0;
}