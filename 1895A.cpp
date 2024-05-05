#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int x, y, k; cin >> x >> y >> k;
    int res = max(x, y);
    if (x <= y) res += max(y - x - k, 0LL);
    cout << res <<  endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}