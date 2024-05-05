#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    while (test--){
        cin >> n; cin >> x;
        if (x==1) cout << "Yes\n";
        else cout << "No\n";
        for (int i = 1; i < n; i++) cin >> x;
    }
    return 0;
}