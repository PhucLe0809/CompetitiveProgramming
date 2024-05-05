#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, m, z, temp;
    while (test--){
        cin >> n >> m >> z;
        temp = (n*m)/__gcd(n, m);
        cout << z/temp << '\n';
    }
    return 0;
}