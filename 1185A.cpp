#include <bits/stdc++.h>

using namespace std; 
int32_t inp[5];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t d; 
    cin >> inp[0] >> inp[1] >> inp[2] >> d;
    sort(inp, inp+3);
    cout << max(d-(inp[1]-inp[0]), 0) + max(d-(inp[2]-inp[1]), 0) << '\n';
    return 0;
}