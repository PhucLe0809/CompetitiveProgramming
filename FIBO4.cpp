#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000007

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n <= 2) cout << 1;
    else{
        int f1 = 1, f2 = 1, fi;
        for (int i = 3; i <= n; i++){
            fi = (f1 % mod + f2 % mod) % mod;
            f2 = f1; f1 = fi;
        }
        cout << fi;
    }
    return 0;
}