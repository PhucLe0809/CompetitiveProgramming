#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        cout << inp[n-1]+inp[n-2] << '\n';
    }
    return 0;
}