#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t c, d;
    while (test--){
        cin >> c >> d;
        if (c==d){
            if (c==0) cout << 0 << '\n';
            else cout << 1 << '\n';
        }else{
            if (abs(c-d)%2==0) cout << 2 << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}