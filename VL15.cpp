#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    if (b == 0) cout << "INVALID";
    else{
        if (a % b == 0) cout << a / b;
        else {
            int gcd = __gcd(a, b);
            cout << a / gcd << " " << b / gcd;
        }
    }
    return 0;
}