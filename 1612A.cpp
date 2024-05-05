#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, y;
    while (test--){
        cin >> x >> y;
        if ((x-y)%2!=0) cout << -1 << " " << -1 << '\n';
        else{
            if (x >(x+y)/2) cout << x-(x+y)/2 << " " << y << '\n';
            else cout << x << " " << y-(x+y)/2 << '\n';
        }
    }
    return 0;
}