#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    if (n==1){
        cout << inp[0] << '\n'; return 0;
    }
    int gcd = __gcd(inp[0], inp[1]);
    for (int i = 2; i < n; i++) gcd = __gcd(gcd, inp[i]);
    sort(inp.begin(), inp.end());
    if (binary_search(inp.begin(), inp.end(), gcd)) cout << gcd;
    else cout << -1;    
    return 0;
}