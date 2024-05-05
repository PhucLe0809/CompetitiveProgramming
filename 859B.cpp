#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a = floor(sqrt(n));
    if (a*a == n) cout << 4*a;
    else{
        cout << 4*a + 2*int(ceil((n-a*a)*1.0/a));
    }
    return 0;
}