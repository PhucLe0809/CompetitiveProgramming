#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x, y, z; cin >> x >> y >> z;
    if (x > y+z) cout << "+";
    else if (y > x+z) cout << "-";
        else if (x==y && z==0) cout << "0";
            else cout << "?";
    return 0;
}