#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b; cin >> a >> b;
    int64_t x, y, z; cin >> x >> y >> z;
    cout << max(2*x+y-a, int64_t(0))+max(3*z+y-b, int64_t(0));
    return 0;
}