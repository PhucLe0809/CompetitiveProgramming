#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t y, b, r; cin >> y >> b >> r;
    if (b>=r) b = r-1;
    else r = b+1;
    if (y>=b) y = b-1;
    else{
        b = y+1; r = b+1;
    }
    cout << y+b+r;
    return 0;
}