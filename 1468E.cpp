#include <bits/stdc++.h>

using namespace std; 
int32_t inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    while (test--){
        for (int i = 0; i < 4; i++) cin >> inp[i];
        sort(inp, inp+4);
        cout << inp[0]*inp[2] << '\n';
    }
    return 0;
}