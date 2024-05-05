#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l, r; cin >> l >> r;
    int res = 0;
    for (int i = l+1; i < r; i++){
        int cnt = 0;
        for (int j = 1; j*j <= i; j++){
            if (i % j == 0) cnt += 2;
        }
        cnt -= (int)(sqrt(i) == (int)sqrt(i));
        res += (int)(cnt % 2 != 0);
    }
    cout << res;
    return 0;
}