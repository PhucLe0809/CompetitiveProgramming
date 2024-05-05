#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, s, t;
    while (test--){
        cin >> n >> s >> t;
        cout << n-min(s, t)+1 << '\n';
    }
    return 0;
}