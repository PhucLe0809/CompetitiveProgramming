#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
// 1000000000000

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, x, y; cin >> n >> x >> y;
    if (x == 0 || y == 0){
        cout << 0; return 0;
    }
    int a = abs(x / __gcd(x, y));
    int b = abs(y);
    if (to_string(a).size() + to_string(b).size() > 18){
        cout << 0; return 0;
    }else{
        cout << n / (a * b);
    }
    return 0;
}
