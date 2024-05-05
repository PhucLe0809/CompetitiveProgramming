#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, s; cin >> n >> s;
    if (s<n) cout << 1;
    else if (s%n==0) cout << s/n;
        else cout << s/n+1;
    return 0;
}