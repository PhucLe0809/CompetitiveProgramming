#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int a, b, c; cin >> a >> b >> c;
        int minn = min({a, b, c});
        if (!(a % minn == 0 && b % minn == 0 && c % minn == 0)){
            cout << "NO\n";
        }else{
            int x = a/minn, y = b/minn, z = c/minn;
            if (x + y + z - 3 <= 3) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}