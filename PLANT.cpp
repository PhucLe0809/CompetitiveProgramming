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
        int res = 1;
        for (int i = 1; i <= n; i++){
            if (i % 2 != 0) res *= 2;
            else res++;
        }
        cout << res << endl;
    }
    return 0;
}