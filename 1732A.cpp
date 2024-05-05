#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (n==1){
            if (inp[0]==1) cout << 0 << '\n';
            else cout << 1 << '\n';
            continue;
        }
        int gcd = __gcd(inp[0], inp[1]);
        for (int i = 2; i < n; i++) gcd = __gcd(gcd, inp[i]);
        if (gcd==1){ cout << 0 << '\n'; continue; }
        if (__gcd(gcd, n)==1) cout << 1;
        else if (__gcd(gcd, n-1)==1) cout << 2; else cout << 3;
        cout << '\n';
    }
    return 0;
}