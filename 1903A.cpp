#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    bool check = true; int pre = LONG_MIN;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        check = check && (pre <= x);
        pre = x;
    }
    if (k > 1) cout << "YES\n";
    else{
        if (check) cout << "YES\n";
        else cout << "NO\n";
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