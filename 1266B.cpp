#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t x;
    while (test--){
        cin >> x;
        if (0<x%14 && x%14<7 && x>14) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}