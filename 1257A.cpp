#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, a, b, infront;
    while (test--){
        cin >> n >> x >> a >> b;
        if (a>b) swap(a, b);
        infront = a;
        a = max(a-x, 1); 
        x = max(x-(infront-a), 0);
        b = min(b+x, n);
        cout << b-a << '\n';
    }
    return 0;
}