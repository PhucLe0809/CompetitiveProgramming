#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    bool check = false;
    int res = 1001, even = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        check = check || (x % k == 0);
        even += (int)(x % 2 == 0);
        if (x < k) res = min(res, k - x);
        else res = min(res, (int)ceil(x*1.0 / k) * k - x);
    }
    if (check){
        cout << "0\n"; return;
    }
    if (k != 4 || n == 1){
        cout << res << endl;
    }else{
        cout << min(res, max(0LL, 2LL - even)) << endl;
    }
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