#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void solve(){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x; sum += x;
    }
    if (sqrt(sum) == (int)sqrt(sum)) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}