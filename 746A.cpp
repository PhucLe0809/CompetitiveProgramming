#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b, c; cin >> a >> b >> c;
    cout << min({a, b/2, c/4})*7 << '\n';
    return 0;
}