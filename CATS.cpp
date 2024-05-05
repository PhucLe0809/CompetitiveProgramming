#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int x, y, z; cin >> x >> y >> z;
        int a = abs(x - z), b = abs(y - z);
        if (a == b) cout << "Mouse C\n";
        else{
            if (a < b) cout << "Cat A\n"; else cout << "Cat B\n";
        }
    }
    return 0;
}