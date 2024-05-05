#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int res = 0;
    for (int i = 0; i < 6; i++){
        int p, s; cin >> p >> s;
        res += max(p - (s - 1) * (p / 10), 0LL);
    }
    cout << res;
    return 0;
}