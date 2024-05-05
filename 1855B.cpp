#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int64_t n; cin >> n;
        int x = 1;
        while (x <= n && n % x == 0) x++;
        cout << x-1 << '\n';
    }
    return 0;
}