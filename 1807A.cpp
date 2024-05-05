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
        if (a+b == c) cout << "+\n";
        else cout << "-\n";
    }
    return 0;
}