#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < k; i++) cout << "a";
        for (int i = 1; i <= (n-k)/3; i++) cout << "cba";
        if ((n-k)%3 == 1) cout << "c";
        else if ((n-k)%3 == 2) cout << "cb";
        cout << '\n';
    }
    return 0;
}