#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    cout << (n/7)*2+(n%7>5) << " " << min(n, 2)+((n-2)/7)*2+((n-2)%7>5);
    return 0;
}