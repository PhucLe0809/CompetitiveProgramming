#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    if (n <= 10 || n >= 22){
        cout << 0;
    }else{
        n -= 10;
        if (1 <= n && n <= 9) cout << 4;
        else{
            if (n == 10) cout << 15;
            else cout << 4;
        }
    }
    return 0;
}