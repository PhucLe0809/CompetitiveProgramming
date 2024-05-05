#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    for (int64_t i = round(sqrt(n)); i > 0; i--){
        if (n%i==0){
            cout << (i+n/i)*2; break;
        }
    }
    return 0;
}