#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    if (n%3 == 0){
        cout << 1 << " " << 1 << " " << n-2 << '\n';
    } else cout << 1 << " " << 2 << " " << n-3 << '\n';
    return 0;
}