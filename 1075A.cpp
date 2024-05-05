#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    int64_t x, y; cin >> x >> y;
    if (abs(x-1)+abs(y-1) > abs(n-x)+abs(n-y))
        cout << "Black";
    else cout << "White";
    return 0;
}