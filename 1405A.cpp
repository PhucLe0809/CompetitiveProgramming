#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; 
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int i = n-1; i >= 0; i--) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}