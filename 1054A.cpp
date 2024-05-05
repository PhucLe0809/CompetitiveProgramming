#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    int32_t one = abs(x-z)*t2+t3+abs(x-y)*t2+2*t3;
    int32_t two = abs(x-y)*t1;
    if (one <= two) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}