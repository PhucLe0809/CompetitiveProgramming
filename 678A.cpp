#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    cout << (n/k+1)*k;
    return 0;
}