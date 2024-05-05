#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = round(sqrt(n)); i > 0; i--){
        if (n%i == 0){
            cout << i << " " << n/i;
            break;
        }
    }
    return 0;
}