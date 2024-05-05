#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    int res = 0;
    for (int i = m; i <= n; i++){
        string str = to_string(i);
        int cnt = 0;
        for (auto &it:str) cnt += (int)(it == '5');
        res += cnt;
    }
    cout << res;
    return 0;
}