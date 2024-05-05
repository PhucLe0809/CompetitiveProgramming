#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t a, b, c, d, m, v;
    cin >> a >> b >> c >> d;
    m = max(3*a/10, a-(a/250)*c);
    v = max(3*b/10, b-(b/250)*d);
    if (m > v) cout << "Misha\n";
    else if (m < v) cout << "Vasya\n";
        else cout << "Tie\n";
    return 0;
}