#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b, c; cin >> a >> b >> c;
    cout << 2*min(a, b)+2*c+min(a-min(a, b), int64_t(1))+min(b-min(a, b), int64_t(1));
    return 0;
}