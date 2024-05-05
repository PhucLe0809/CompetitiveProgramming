#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t l, r, a; cin >> l >> r >> a;
    cout << 2*min(min(l, r)+a, max(l, r))+((a-(min(min(l, r)+a, max(l, r))-min(l, r)))/2)*2;
    return 0;
}