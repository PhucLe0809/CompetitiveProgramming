#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c;
    while (test--){
        cin >> a >> b >> c;
        cout << a+b+c << " " << b+c << " " << c << '\n';
    }
    return 0;
}