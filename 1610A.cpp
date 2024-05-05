#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m;
    while (test--){
        cin >> n >> m;
        if (n==1 && m==1) cout << 0;
        else if (n==1 || m==1) cout << 1;
            else cout << 2;
        cout << '\n';
    }
    return 0;
}