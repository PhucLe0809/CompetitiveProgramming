#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t start = 1;
    for (int i = 1; i < n; i++){
        start += i; 
        if (start%n==0) cout << n << " ";
        else cout << start%n << " ";
    }
    return 0;
}