#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t s, a, b, c;
    while (test--){
        cin >> s >> a >> b >> c;
        cout << (s/c)+((s/c)/a)*b << '\n';
    }
    return 0;
}