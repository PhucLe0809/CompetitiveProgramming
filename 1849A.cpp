#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int a, b, c; cin >> a >> b >> c;
        if (a <= b+c) cout << 2*a-1 << '\n';
        else cout << 2*(b+c) + 1 << '\n';
    }
    return 0;
}