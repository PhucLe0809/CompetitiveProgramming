#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(abs(a-c), abs(b-d));
    return 0;
}