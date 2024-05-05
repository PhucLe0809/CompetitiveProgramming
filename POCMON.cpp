#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        uint64_t n; cin >> n;
        if (n % 8 != 0 || n == 0) cout << -1 << '\n';
        else cout << 5*n/8 << " " << n/4 << " " << n/8 << '\n';
    }    
}