#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        if (n%2!=0) cout << 1 << " ";
        for (int i = 1+(n%2!=0); i < n-1; i+=2) cout << i+1 << " " << i << " ";
        cout << n-1 << " " << n;
        cout << '\n';
    }
    return 0;
}