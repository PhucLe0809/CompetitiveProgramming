#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, stones;
    while (test--){
        cin >> a >> b >> c;
        stones = 3*min(b, c/2);
        b -= min(b, c/2);
        stones += 3*min(a, b/2);
        cout << stones << '\n';
    }
    return 0;
}