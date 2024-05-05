#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int a, b, c; cin >> a >> b >> c;
        int d = abs(a - b);
        d = ceil(d*1.0/(2*c));
        cout << d << '\n';
    }
    return 0;
}