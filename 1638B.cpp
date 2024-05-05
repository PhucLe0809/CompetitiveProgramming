#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int scan[2] = {LONG_MIN, LONG_MIN}; bool check = true;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        check = check && (scan[x&1] <= x);
        scan[x&1] = x;
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";
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