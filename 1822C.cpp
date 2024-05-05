#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n;
    while (test--){
        cin >> n;
        cout << 4*n+(n-1)*(n)/2+(n-2)*(n-1)/2+1 << '\n';
    }
    return 0;
}