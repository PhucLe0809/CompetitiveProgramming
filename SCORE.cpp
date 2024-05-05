#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str; cin >> str; str.push_back('X');
    int n = str.size();
    int res = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        if (str[i] == 'X'){
            res += cnt * (cnt + 1) / 2;
            cnt = 0;
        }else{
            cnt++;
        }
    }
    cout << res << endl;

    return 0;
}