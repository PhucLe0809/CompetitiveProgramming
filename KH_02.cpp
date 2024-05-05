#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        if (n < 38){
            cout << n << endl; continue;
        }
        if (n % 5 < 3){
            cout << n << endl;
        }else{
            if (n % 10 < 5) cout << (n/10) * 10 + 5 << endl;
            else cout << (n/10) * 10 + 10 << endl;
        }
    }
    return 0;
}