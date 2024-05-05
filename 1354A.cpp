#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, c, d; 
    while (test--){
        cin >> a >> b >> c >> d;
        if (a>b && d>=c) cout << -1;
        else{
            if (b>=a) cout << b;
            else{
                cout << b+int64_t(ceil((a-b)*1.0/(c-d)))*(c);
            }
        }
        cout << '\n';
    }
    return 0;
}