#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int a, b;
    while (test--){
        cin >> a >> b; // (ax + by) mod (__gcd(a, b)) == 0
        if (__gcd(a, b)==1) cout << "Finite\n";
        else cout << "Infinite\n"; 
    }
    return 0;
}