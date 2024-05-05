#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t x, y; cin >> x >> y;
        if ((2*x - y)*1.0/3 == int64_t((2*x - y)/3) 
        && (2*x - y)/3 >= 0 && (2*x - y)/3 <= y) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}