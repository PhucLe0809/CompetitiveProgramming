#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, n;
    while (test--){
        cin >> a >> b >> n;
        n %= 3;
        if (n==0) cout << a;
        else if (n==1) cout << b;
            else cout << (a^b);
        cout << '\n';
    }
    return 0;
}