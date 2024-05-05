#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, x; cin >> n >> x;
    int res = 0, pre = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        res = max(res, x - pre); pre = x;
    }
    cout << max(res, 2*(x - pre)) << endl;
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